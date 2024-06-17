#include<iostream>
using namespace std;

void DEL_atbegaining();
void DEL_atlast();
void DEL_atpos();
void Display();

struct node{
    int data;
    struct node *next;
};

struct node *head;
struct node *temp;
struct node *newnode;
struct node *prevnode;
 int choice = 1;
int main(){
    head = NULL;
   
    while(choice){
        newnode = new node();
        cout<<"Enter The Data"<<endl;
        newnode->next = 0;
        cin>>newnode->data;
        if(head == 0){
            temp = head = newnode;
        }
        else{
            temp->next = newnode;
            temp = newnode; 
        }
        cout<<"enter the choice whether you want to continue or not (0, 1)"<<endl;
        cin>>choice; 
    }
     temp = head; 
     int count = 0;
    while(temp!=0){
        //cout<<temp->data<<endl;
        temp = temp->next;
        count++;
    }
   // cout<<count<<endl;
  /*DEL_atbegaining();
  Display();*/
  /*DEL_atlast();
  Display();*/
DEL_atpos();
Display();
}

 /*void DEL_atbegaining(){
    head = head->next;
    free(temp);
    temp = head;
 }*/
 /*void DEL_atlast(){
    //cout<<x<<endl;
   int i;
   
   temp = head;
  
    while(temp->next!=0){  
        prevnode = temp;
        temp = temp->next;    
    }

    if(temp==head){
        temp = head;
    }
    else{
    prevnode->next = 0;
    }
    free(temp);
 }*/
 void DEL_atpos(){
    int pos;
    cout<<"enter the position where you want to delete"<<endl;
    cin>>pos;    
     int i = 1;
     temp = head;
     while(i<pos){
        prevnode = temp;
      temp = temp->next;
      i++;
     }
    prevnode->next = temp->next;
    temp->next = NULL;
    //delete temp;
    free(temp); 
    //free(prevnode);
 }

 

void Display(){
    temp = head;
  while(temp!=0){
        cout<<temp->data<<endl;
        temp = temp->next;
    }  
}