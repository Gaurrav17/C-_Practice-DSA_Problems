#include<iostream>
using namespace std;

void dequefront();
void dequerare();
void enquefront();
void enquerare();
void display();
int front = -1;
int rare = -1;
int queue[5];
int main(){
    int choice = 1;
    while(choice!=0){
        cout<<"enter the choice"<<endl;
        cout<<"1--------->enquefront();"<<endl;
        cout<<"2--------->enquerare();"<<endl;
        cout<<"3--------->dequefront();"<<endl;
        cout<<"4--------->dequerare();"<<endl;
        cout<<"5--------->display();"<<endl;
        cin>>choice;
        switch(choice){
            case 1:
            enquefront();
            break;
            case 2:
            enquerare();
            break;
            case 3:
            dequefront();
            break;
            case 4:
            dequerare();
            break;
            case 5:
            display();
            break;
            default :
            cout<<"INVALID CHOICE INPUTTED"<<endl;

        }
    }
}

void enquefront(){
    int x;
    cout<<"Enter Data"<<endl;
    cin>>x;
    if((front==0&&rare==4)||(front==rare+1)){
        cout<<"Overflow condition"<<endl;
    }
    else if(front==0){
        front = 4;
        queue[front] = x;
    }
    else if(front==-1&&rare==-1){
          front = rare = 0;
    }
    else{
        front--;
        queue[front] = x;
    }
}

void enquerare(){
    int x;
    cout<<"Enter Data"<<endl;
    cin>>x;
    if((front==0&&rare==4)||(front==rare+1)){
        cout<<"Overflow condition"<<endl;
    }
    else if(rare==4){
        rare = 0;
        queue[rare] = x;
    }
    else if(front==-1&&rare==-1){
          front = rare = 0;
    }
    else{
        rare++;
        queue[rare] = x;
    }
}

void dequefront(){
    if(front==-1&&rare==-1){
        cout<<"Underflow Condition"<<endl;
    }
    else if(front==0&&rare==0){
        front = rare = -1;
    }
    else if(front==4){
        cout<<queue[front]<<endl;  
        front = 0;
    }
    else{
        cout<<queue[front]<<endl;  
        front = front + 1;  
    }
}

void dequerare(){
    if(front==-1&&rare==-1){
        cout<<"Underflow Condition"<<endl;
    }
    else if(front==0&&rare==0){
        front = rare = -1;
    }
    else if(rare==0){
        cout<<queue[front]<<endl;  
        rare = 4;
    }
    else{
        cout<<queue[rare]<<endl;  
        rare = rare - 1;
        
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
