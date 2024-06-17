#include<iostream>
using namespace std;
void insertatbeg();
void insertatend();
void insertatpos();
void display();

struct node
{
  int data;
  struct node *prev;
  struct node *next;
};

struct node *temp;
struct node *tail;
struct node *head;
struct node *newnode;

int main(){
     int choice = 1;
     head = NULL;
     while(choice){
        newnode = new node();
        cout<<"enter the data"<<endl;
        cin>>newnode->data;
        if(head==0){
            head = tail = newnode;
            head->next = head;
            head->prev = head;
        }
        else{
            tail->next = newnode;
            newnode->prev = tail;
            newnode->next = head;
            head->prev = newnode;
            tail = newnode;
        }
        cout<<"enter your choice (0, 1)"<<endl;
        cin>>choice;
     }
     temp = head;
     while(temp!=tail){
        //cout<<temp->data<<endl;
        temp = temp->next;
     }
     //cout<<temp->data<<endl;
     int a;
     cout<<"enter the value of a"<<endl;
     cout<<"1 for -------> begaining"<<endl;
     cout<<"2 for -------> End"<<endl;
     cout<<"3 for -------> any position"<<endl;
     cout<<"4 for -------> display only"<<endl;
     
     cin>>a;
     switch(a){
        case 1:
        insertatbeg();
        cout<<"your elements are"<<endl;
        display();
        break;
        case 2:
        insertatend();
        cout<<"your elements are"<<endl;
        display();
        break;
        case 3:
        insertatpos();
        cout<<"your elements are"<<endl;
        display();
        break;
        case 4:
        cout<<"your elements are"<<endl;
        display();
        break;
     }
}

void insertatbeg(){
    newnode = new node();
    cout<<"enter the data"<<endl;
    cin>>newnode->data;
    if(head == 0){
        head = temp = tail = newnode;
        newnode->next = head;
        newnode->prev = tail;
    }
    else{  
        newnode->next = head;
        head->prev = newnode;
        head = newnode;
        tail->next = newnode;
    }
}

void insertatpos(){
    newnode = new node();
    int pos, i = 1;
    cout<<"enter the position you want to insert"<<endl;
    cin>>pos;
    cout<<"enter the data you want to inser"<<endl;
    cin>>newnode->data;
    temp = head;
    while(i<pos-1){
        temp = temp->next;
        i++;
    }
    newnode->prev = temp;
    newnode->next = temp->next;
    temp->next->prev = newnode;
    temp->next = newnode;
}
void insertatend(){
     newnode = new node();
     cout<<"enter the data you want to insert"<<endl;
     cin>>newnode->data;
     if(head == 0){
        head = temp = tail = newnode;
        newnode->next = head;
        newnode->prev = tail;
    }
    else{  
        newnode->prev = tail;
        newnode->next = tail->next;
        tail->next = newnode;
        tail = newnode;
}
}

void display(){
   temp = head;
     while(temp!=tail){
        cout<<temp->data<<endl;
        temp = temp->next;
     }
      cout<<temp->data<<endl; 
}