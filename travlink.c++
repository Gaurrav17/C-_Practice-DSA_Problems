#include <iostream>
using namespace std;

int main()
{
    struct node
    {
        int data;
        struct node *next;
    };

    struct node *newnode;
    struct node *temp;
    struct node *head;
    
    head = NULL;
    int choice = 1;
    while (choice)
    {
        // newnode = new newnode;
        //head = new node();
        newnode = new node();
        //temp = new node();
        //struct node* newnode = (struct node*) malloc(sizeof(struct node));
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
    temp = head; // we have to initialize it first to head to acces all the elements
    cout<<"your elements are";
    while (temp != 0)
    {
        cout << temp->data <<"  "<< endl;
        temp = temp->next;
    }
}