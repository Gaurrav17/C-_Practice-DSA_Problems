#include<iostream>

using namespace std;

void insertbegan();
void insertpos();
void insertend();
void insertaftpos();
void display();

struct node{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *temp;
struct node *head;
struct node *newnode;
struct node *tail;

int main(){
    head = NULL;
    int choice = 1;
    while(choice){
        newnode = new node();
        cout<<"enter the data"<<endl;
        cin>>newnode->data;
        if(head == 0){
            temp = head = newnode;            
        }
        else{
            temp->next = newnode;
            newnode->prev = temp;
            temp = newnode;
        }
        cout<<"enter the choice to continue or not(0, 1)"<<endl;
        cin>>choice;
    }
      temp = head;
    while(temp!=0){
        tail = temp;
        temp = temp->next;   
    }
    int a;
    cout<<"enter the value of a"<<endl;
    cin>>a;

    switch(a){
    case 1:    
   insertbegan();
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
   case 4:
   insertaftpos();
   display();
   break;
    }
}

void insertbegan(){
    newnode = new node();
    cout<<"enter the data for the new node"<<endl;
    cin>>newnode->data;
    newnode->prev = 0;
    newnode->next = 0;
    temp = head;
    head->prev = newnode;
    newnode->next = head;
    head = newnode;
}

void insertend(){
   newnode = new node();
   cout<<"enter the data you want to insert"<<endl;
   cin>>newnode->data;
   newnode->next = 0;
   newnode->prev = 0;
   temp = head;
   tail->next = newnode;
   newnode->prev = tail;
   newnode->next = 0;
}
void insertpos(){
    newnode = new node();
    int pos, i = 1;
    cout<<"enter the data you want to insert"<<endl;
    cin>>newnode->data;
    cout<<"enter the position you want to insert" <<endl;
    cin>>pos;
    newnode->next = 0;
    newnode->prev = 0;
    temp = head;
    while(i<pos-1){
        temp = temp->next;    
        i++;
    }
    newnode->next = temp->next;
    temp->next = newnode;
    newnode->prev = temp;  
    newnode->next->prev = newnode;
}
void insertaftpos(){
    newnode = new node();
    int pos, i = 1;
    cout<<"enter the data you want to insert"<<endl;
    cin>>newnode->data;
    cout<<"enter the position you want to insert" <<endl;
    cin>>pos;
    newnode->next = 0;
    newnode->prev = 0;
    temp = head;
    while(i<pos){
        temp = temp->next;    
        i++;
    }
    newnode->next = temp->next;
    temp->next = newnode;
    newnode->prev = temp;  
    newnode->next->prev = newnode;
}


void display(){
    temp = head;
    while(temp!=0){
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}
