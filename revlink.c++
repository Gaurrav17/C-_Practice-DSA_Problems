#include <iostream>
using namespace std;
void reverse();
void Display();
struct node
{
    int data;
    struct node *next;
};

struct node *head;
struct node *newnode;
struct node *temp;

int main()
{
     head = NULL;
    int choice = 1;

    while (choice)
    {
      newnode = new node();
        cout << "enter the data" << endl;
        cin >> newnode->data;
        newnode->next = 0;
        if (head == 0)
        {
            temp = head = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        cout << "do you want to continue (0, 1)" << endl;
        cin >> choice;
    }

    cout << "your enterd data are" << endl;
    temp = head;

    while (temp != 0)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }

    reverse();
    Display();
}

void reverse(){
    struct node *currentnode , *prevnode, *nextnode;
    prevnode = 0;
 currentnode = nextnode = head;
while(nextnode!=0){
    nextnode = nextnode->next; 
    currentnode->next = prevnode;
    prevnode = currentnode;
    currentnode = nextnode;
}
cout<<"your reverse data are"<<endl;
//head = prevnode;
}
void Display(){
    temp = head;
  while(temp!=0){
        cout<<temp->data<<endl;
        temp = temp->next;
    }  
}






