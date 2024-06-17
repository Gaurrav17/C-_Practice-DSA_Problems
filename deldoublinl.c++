#include<iostream>
using namespace std;

void delatbeg();
void delatend();
void delatpos();
void display();

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head;
struct node *newnode;
struct node *temp;
struct node *tail;



int main(){
 int choice = 1;
 head = NULL;
 while(choice){
   newnode = new node();
   cout<<"enter the data"<<endl;
   cin>>newnode->data;
   if(head ==  0){
    temp = head = newnode;
   } 
   else{
   temp->next = newnode;
   temp->prev = temp;
   temp = newnode;
   }
   cout<<"enter the choice (0 , 1)"<<endl;
   cin>>choice;
 }
 temp = head;
 while(temp!=0){
    //cout<<temp->data;
    tail = temp;
    temp = temp->next;
 }
delatbeg();
delatend();
delatpos();
display();
}
void delatbeg(){
    if(head == 0){
        cout<<"list is empty";
    }
    else{
        temp = head;
        head = head->next;
        head->prev = 0;
        free(temp);
    }
}
void delatend(){
    if(tail==0){
        cout<<"invalid position"<<endl;
    }
    else
    temp == tail;
    tail->prev->next = 0;
    tail = tail->next;
    free(temp);
}
void delatpos(){
    int pos, i = 1;
    temp = head;
    cout<<"enter the position"<<endl;
    cin>>pos;

    while(i<pos){
        temp = temp->next;
        i++;
    }
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    free(temp);
}
void display(){
 while (temp != 0)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}
