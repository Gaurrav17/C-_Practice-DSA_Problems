#include<iostream>
using namespace std;

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
     /*while(temp!=tail){
        cout<<temp->data<<endl;
        temp = temp->next;
     }
     cout<<temp->data<<endl;*/
     do{
        cout<<temp->data<<endl;
         temp = temp->next;
     }
     while(temp!=tail);
    
}