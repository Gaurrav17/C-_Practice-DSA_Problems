//using tail pointer
#include<iostream>
using namespace std;
void reversecll();
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
struct node *nextnode;

struct node *previous; 
struct node *current;  



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
        //cout<<temp->data<<endl;
        temp = temp->next;
    }
    //cout<<temp->data<<endl;
reversecll();
display();

}
void reversecll(){
    current = tail->next;
    nextnode = current->next;

    while(current  != tail){
          previous = current;
          current = nextnode;
          nextnode = current->next;
          current->next = previous;
    }
nextnode->next = tail;
}
void display(){
    temp = tail->next;
    while(temp->next!=tail){
        cout<<temp->data<<endl;
        temp = temp->next;
    }
    cout<<temp->data<<endl;
}
