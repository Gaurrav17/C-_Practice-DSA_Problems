#include<iostream>
using namespace std;

void enqueue();
void dequeue();
void display();
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
         peek();
         break;
         case 4:
         display();
         break;
        }

    }
}

void enqueue(){
    int x;
    cout<<"Enter Data"<<endl;
    cin>>x;
    if(((rare+1)%5) == front){
        cout<<"Overflow condition"<<endl;    
    }
    else if(front == -1 && rare == -1){
            front = rare = 0;
            queue[rare] = x;
    }
    else{
        rare = (rare+1)%5;
        queue[rare] = x;
    }
}

void dequeue(){
       if(front == rare){
        front = rare = -1;
       }
       else if(front == -1 && rare == -1){
            cout<<"UNDERFLOW CONDITION"<<endl;  
       }
       else{
           cout<<"Deleted item are"<<queue[front];
           front = (front + 1)%5;
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

void display(){
    int i;
    i = front;
     if(front == -1 && rare == -1){
        cout<<"Underflow Conndition"<<endl;
     }
     else{
        cout<<"your ques is:"<<endl;
        while(i != rare){
            cout<<queue[i]<<endl;
            i = (i+1)%5;
        }
        cout<<queue[rare]<<endl;
     }
}


