#include<iostream>
using namespace std;

void deletatbeg();
void deletatend();
void deleteatpos();
void display();

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *temp;
struct node *tail;
struct node *head;
struct node *newnode;

int main()
{
    int choice = 1;
    head = NULL;
    while (choice)
    {
        newnode = new node();
        cout << "enter the data" << endl;
        cin >> newnode->data;
        if (head == 0)
        {
            head = tail = newnode;
            head->next = head;
            head->prev = head;
        }
        else
        {
            tail->next = newnode;
            newnode->prev = tail;
            newnode->next = head;
            head->prev = newnode;
            tail = newnode;
        }
        cout << "enter your choice (0, 1)" << endl;
        cin >> choice;
    }
    temp = head;
    while (temp != tail)
    {
        // cout<<temp->data<<endl;
        temp = temp->next;
    }
     int a;
    cout << "enter the value of a" << endl;
    cout << "1 for -------> begaining" << endl;
    cout << "2 for -------> End" << endl;
    cout << "3 for -------> any position" << endl;
    cout << "4 for -------> display only" << endl;

    cin >> a;
    switch (a)
    {
    case 1:
        deletatbeg;
        cout << "your elements are" << endl;
        display();
        break;
    case 2:
        deletatend();
        cout << "your elements are" << endl;
        display();
        break;
    case 3:
         deleteatpos();
        cout << "your elements are" << endl;
        display();
        break;
    case 4:
        cout << "your elements are" << endl;
        display();
        break;
    }
}
void deleteatpos(){
   
   temp = head;
   int i = 1, pos;
   cout<<"enter the posiition"<<endl;
   cin>>pos;
   while(i<pos){
    temp = temp->next;
    i++;
   }
   temp->prev->next = temp->next;
   temp->next->prev = temp->prev;

    free(temp);
   

}
void deletatend(){
    temp = tail;
    tail = tail->prev;
    tail->next = head;
    head->prev = tail;
    free(temp);
}
void deletatbeg(){

     temp = head;
     head = head->next;
     head->prev = tail;
     tail->next = head;
     free(temp);

}
void display(){

    temp = head;
    while (temp != tail)
    {
       cout<<temp->data<<endl;
        temp = temp->next;
    }
      cout<<temp->data<<endl;

}
