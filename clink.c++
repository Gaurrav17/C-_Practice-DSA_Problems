#include <iostream>
using namespace std;

//void linklistc();
void linklistib();  
void linklistibt();
void linklistdb(); 
void reverselink();
class node{
    public:
    int data;
    node *next;
};

node *temp;
node *head;
node *newnode;
node *flag;


int main(){
    //linklistib();

    int choice = 0;
while(!choice){

    
      newnode = new node();
     cout<<"enter data is to be inserted"<<endl;
     cin>>newnode->data;
    
     if(head==NULL){
        head = temp = newnode;
     }
     else{
      temp->next = newnode;
      temp = newnode;

     }    
    cout<<"enter to exist th loop"<<endl;
    cin>>choice; 
}
cout<<"your data is"<<endl;
temp = head;
while(temp!=0){
    cout<<temp->data<<endl;
    temp = temp->next;
}
cout<<"callinf function"<<endl;
 //linklistibt();
 //linklistdb();
 reverselink(); 

}

/*void linklistib(){
    temp = head;
    newnode = new node();
    int x;
    cout<<"enter data that is to be inserted"<<endl;
    cin>>newnode->data;
    //temp  = newnode;
    head = newnode;
    head->next = temp;
    cout<<"your data is"<<endl;
      temp = head;
      while(temp!=0){
      cout<<temp->data<<endl;
      temp = temp->next;
}
}*/

/*void linklistibt(){
    int pos;
    temp = head;
    cout<<"enter position"<<endl;
    cin>>pos;
    newnode = new node();
    cout<<"enter data"<<endl;
    cin>>newnode->data;
    int i = 1;
    while(i<pos){
     temp = temp->next; 
     i++;
    }
     flag = temp;
     temp->next = newnode;
     newnode->next = flag->next; 
     cout<<"your data is"<<endl;
    temp = head;
    while(temp!=0){
    cout<<temp->data<<endl;
    temp = temp->next;   
}
}*/

/*void linklistdb(){
    int pos;
    temp = head;
    cout<<"enter position"<<endl;
    cin>>pos;
    int i = 1;
    while(i<pos){          
     flag = temp;
     temp = temp->next; 
     i++;
    }
    flag->next = temp->next;
    free(temp);
    cout<<"your data is"<<endl;
    temp = head;
while(temp!=0){
    cout<<temp->data<<endl;
    temp = temp->next;
}
}*/

void reverselink(){
    temp = head;
    int dat;
    cout<<"enter data that is to be searches"<<endl;
    cin>>dat;
    int flag = 0;
    while(temp!=0){
        if(temp->data==dat){
            flag = 1;
        }
    
        temp = temp->next;
    }
   if(flag==1){
    cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
   }
}