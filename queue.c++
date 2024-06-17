#include<iostream>
using namespace std;

void enqueue();
void dequeue();
void diplay();
void peek();


int queue[5];
int front = -1;
int rare = -1;

int main(){
    int choice = 1;
    while(choice!=0){
        
        cout << "enter choice" << endl;
        cout << "1 for -------> enque" << endl;
        cout << "2 for -------> dequeue" << endl;
        cout << "3 for -------> peek" << endl;
        cout << "4 for -------> display" << endl;
        cin>>choice;
        switch(choice){
         case 1:
         enqueue();
         break;
         case 2:
         dequeue();
         break;
         case 3:
         diplay();
         break;
         case 4:
         peek();
         break;
        }

    }
}

void enqueue(){
    int x;
    cout<<"Enter Data"<<endl;
    cin>>x;
    if(rare == 4){
        cout<<"Overflow condition"<<endl;    
    }
    else if(front == -1 && rare == -1){
            front = rare = 0;
    }
    else{
        rare++;
        queue[rare] = x;
    }
}

void dequeue(){
       if(front == rare){
        cout<<"underflow condition"<<endl;
       }
       else if(front == 0 && rare == 0){
              front = rare = -1;
       }
       else{
           cout<<"Deleted item are"<<queue[front];
           front++;
       }
}

void peek(){
   
   if(front == -1){
    cout<<"Underflow condition"<<endl;
   }
   else{
    cout<<queue[front]<<endl;
   }

}

void diplay(){
    int i;
     if(front == -1){
        cout<<"Underflow Conndition"<<endl;
     }
     else{
        for(i == front; i<rare+1; i++){
            cout<<queue[i]<<endl;
        }
     }
}


