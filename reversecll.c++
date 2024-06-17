#include<iostream>
using namespace std;

void revesecll();
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
        cout<<"enter data"<<endl;
        cin>>newnode->data;
        newnode->next = 0;
        if(head == 0){
            temp = head = newnode;
        }
        else{
               temp->next = newnode;
               temp->prev = temp;
               temp = newnode;
        }
        cout<<"do you want to continue (0, 1)"<<endl;
        cin>>choice;    
    }
     temp = head;
    while(temp!=0){
        tail = temp;
       // cout<<temp->data;
        temp = temp->next;
    }
   revesecll();
  
}
 
void revesecll(){
    struct node *nextnode, *current;
    current = head;
    while(current!=0){
         nextnode = current->next;
         current->next = current->prev;
         current->prev = nextnode;
         current = nextnode;
    }
    current = head;
    head = tail;
    tail = current;
     display();
}
void display(){
    struct node *nextnode, *current;
    //current = head;
    temp = head;
       while(temp!=0){ 
       cout<<temp->data<<endl;
       temp = temp->next;
    }
}
