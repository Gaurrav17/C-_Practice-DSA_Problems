#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head, *temp, *newnode; 

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
    cout<<"do you want to continue"<<endl;
    cin>>choice;    
   }
   temp = head;
   while(temp!=0){
    cout<<temp->data<<endl;
    temp = temp->next;
   }

}