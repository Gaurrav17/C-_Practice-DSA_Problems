#include<iostream>
using namespace std;
void insert();
void delet();
void search();
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
struct node *prevnode;
 

int main(){
    int choice = 1;
    head = NULL;    
    while (choice)
    {
        
        
        newnode = new node();
        
        cout << "enter data" << endl;
        cin >> newnode->data;
        newnode->next=0;
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
    while(temp!=0){
       // cout<<temp->data<<endl;
        temp = temp->next;
    }
    int a;
    cout<<"enter the value of a"<<endl;
    cin>>a;
switch(a){
    case 1:
    insert();
    break;
    case 2:
    display();
    break;
    case 3:
    delet();
    break;
    case 4:
    search();
    break;
default:
cout<<"INVALID CONDITION"<<endl;
}
}

void insert(){
    int pos;
    int i = 1;
    temp = head;
    newnode = new node();
    cout << "enter the pos you want to insert" << endl;
    cin >> pos;
    cout << "enter the data you want to insert" << endl;
    cin >> newnode->data;
    while (i < pos - 1)
    {
        temp = temp->next;
        i++;
    }
    newnode->next = temp->next; 
    temp->next = newnode;
    display();
}

void delet(){
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
    
    free(temp); 
    display();
    
}
void search()
{  
     
    int item,i=0,flag;  
    temp = head;   
    if(temp == NULL)  
    {  
        printf("\nEmpty List\n");  
    }  
    else  
    {   
        printf("\nEnter item which you want to search?\n");   
        scanf("%d",&item);  
        while (temp!=NULL)  
        {  
            if(temp->data == item)  
            {  
                printf("item found at location %d ",i+1);  
                flag=0;  
            }   
            else  
            {  
                flag=1;  
            }  
            i++;  
            temp = temp->next;  
        }  
        if(flag==1)  
        {  
            printf("Item not found\n");  
        }  
    }     
}       
  

void display(){
    temp = head;
    while(temp!=0){
        cout<<temp->data;
        temp = temp->next;
    }
}
