
#include<iostream>
using namespace std;

void insertbeg();
void insertend();
void insertpos();
void display();

struct node{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head;
struct node *temp;          
struct node *newnode; 
struct node *tail; 



int main(){
    int choice = 1;
    head = NULL;    
    while(choice){
    newnode = new node();
    cout<<"enter the data"<<endl;
    cin>>newnode->data;
    newnode->next = 0;
    if(tail == 0){
        tail = newnode;
        tail->next = newnode;
    }
    else{
        newnode->next = tail->next;
        tail->next = newnode;
        tail = newnode;
    }
    cout<<"do you want to continue (0, 1)"<<endl;
    cin>>choice;
    }
    temp = tail->next;
    while(temp->next!=tail->next){
       // cout<<temp->data<<endl;
        temp = temp->next;
    }
    int a;
    cout<<"enter the value of a"<<endl;
    cin>>a;

    switch (a)
    {
    case 1:
      insertbeg();
        display();
        break;
    case 2:
     insertend();
    display();
        break;
     case 3:
     insertpos();
    display();
        break;
       
    
    }
    //cout<<temp->data<<endl;

}
void insertbeg(){
    newnode = new node();
    cout<<"enter the data you want to insert"<<endl;
    cin>>newnode->data;
    newnode->next = 0;
    

    if(tail == 0){
        tail = newnode;
        tail->next = newnode;
    }
    else{
        newnode->next = tail->next;
        tail->next = newnode;
    }
}
void insertend(){
    newnode = new node();
    cout<<"enter the data"<<endl;
    cin>>newnode->data;
    newnode->next = 0;
    if(tail == 0){
        tail->next = newnode;
        tail = newnode;
    }
    else{
       newnode->next = tail->next;
       tail->next = newnode;
       tail = newnode;   
    }
}
void insertpos(){
    newnode = new node();
    cout<<"enter the data"<<endl;
    cin>>newnode->data;
    newnode->next = 0;
    int pos, i = 1;
    cout<<"enter the position where you want to insert"<<endl;
    cin>>pos;
    temp = tail->next;
    while(i<pos-1){
       temp = temp->next;
       i++;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}

void display(){
   temp = tail->next;
   while(temp->next!=tail->next){
       cout<<temp->data<<endl;
        temp = temp->next;
    }
    cout<<temp->data<<endl; 
}
