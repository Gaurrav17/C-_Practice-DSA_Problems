//Using head pointer only
#include<iostream>
using namespace std;


struct node{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head;
struct node *temp;          
struct node *newnode;   


int main(){
    int choice = 1;
    head = NULL;    
    while(choice){
    newnode = new node();
    cout<<"enter the data"<<endl;
    cin>>newnode->data;
    if(head == 0){
        temp = head = newnode;
    }
    else{
        temp->next = newnode;
        temp = newnode;
    }
    temp->next = head;
    cout<<"do you want to continue (0, 1)"<<endl;
    cin>>choice;
    }
    temp = head;
    while(temp->next!=head){
        cout<<temp->data<<endl;
        temp = temp->next;
    }
    cout<<temp->data<<endl;
}