#include <iostream>
using namespace std;

void insert_atlast();
void insert_atbegaining();
void insert_atpos();
void display();

struct node
{
    int data;
    struct node *next;
};
struct node *newnode;
struct node *temp;
struct node *head;



int main()
{
    
    int choice = 1;
    while (choice)
    {
        newnode = new node();
        newnode->next = 0;
        cout << "enter the data of your node" << endl;
        cin >> newnode->data;
        
        if (head == 0)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        cout << "do you want to continue";
        cin >> choice;
    }
    temp = head;
    while (temp != 0)
    {
        //cout << temp->data << endl;
        temp = temp->next;
    }
    int a;
    cout<<"insert a = (1, 2, 3),"<<endl<<"1------> for begainning"<<endl<<"2-------> for last"<<endl<<"3------>for any possible position"<<endl;
    cin>>a;
    switch(a){
    case 1:
   insert_atbegaining();
    display();
    break;
    case 2:
    insert_atlast();
    display();
    break;
    case 3:   
    insert_atpos();
    display();
    break; 
    }
    
    
}
void insert_atbegaining(){
        temp = head;
       
        newnode = new node();
        cout<<"enter the new data you want to insert"<<endl;
        cin >> newnode->data;
        //struct node* newnode = (struct node*) malloc(sizeof(struct node));
        newnode->next = 0;
        newnode->next = head;
        head = newnode;    
     } 

    void insert_atlast(){
        temp = head;
        newnode = new node();

        cout<<"enter the new data you want to insert"<<endl;
        cin>> newnode->data;

        while(temp->next!=0){
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->next = 0;
     }
     void insert_atpos(){
        int pos;
        int i = 1;
        temp = head;
        newnode = new node();
        cout<<"enter the pos you want to insert"<<endl;
        cin>>pos;
        cout<<"enter the data you want to insert"<<endl;
        cin>>newnode->data;
         while(i<pos-1){
            temp = temp->next;
            i++;
         }
         newnode->next = temp->next; //we have to make connect link with right link first if we dont than we will loss our connection to the rest of the node
         temp->next = newnode;
       
     }
  void display(){       
        cout<<"your data is"<<endl;
        temp = head;
        while(temp!=0){
            cout<<temp->data<<endl;                                                                                                              
            temp = temp->next;
            
        }

     }

        


