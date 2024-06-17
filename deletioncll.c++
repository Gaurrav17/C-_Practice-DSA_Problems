
#include<iostream>
using namespace std;

 void deltebeg();
 void delteend();
 void deltepos();
 void display();

struct node{
    int data;
    struct node *next;
};

struct node *tail;
struct node *temp;          
struct node *newnode;
struct node *nextnode;
struct node *previous;
struct node *current;




int main(){
    int choice = 1;
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
     /*deltebeg();
     display();*/
     /*delteend();
     display();*/
     deltepos();
     //display();
}
 /*void deltebeg(){
    temp = tail->next;
    tail->next = temp->next;
    free(temp);
 }*/
 /*void delteend(){
        temp = tail->next;
        while(temp->next!=tail->next){
            previous = temp;
            temp = temp->next;
        }
        previous->next = tail->next; 
        free(temp);
 }*/
 void deltepos(){
    int pos, i = 1;
    cout<<"enter the position where you want to  delete"<<endl;
    cin>>pos;
    temp = tail->next;
    while(i<pos-1){
        previous = temp;
      temp = temp->next;
    cout<<"jdncjn"<<i<<endl; 
    i++;
    cout<<"jdncjn"<<i<<endl;
    }
   /* nextnode = temp->next;
    previous->next = nextnode->next;*/
    //cout<<nextnode->data<<endl;
     //previous->next = temp->next;
//free(temp);
 }

   /*void display(){
     temp = tail->next;
    while(temp->next!=tail->next){
        cout<<temp->data<<endl;
        temp = temp->next;
    }
    cout<<temp->data<<endl;
  }*/