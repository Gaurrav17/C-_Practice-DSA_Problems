#include <iostream>
using namespace std;

//#define N 5;


struct node{
    int data;
    struct node *next; 
};

struct node *temp;
struct node *top = 0;
struct node *head;
struct node *newnode;



void pop();
void push();
void peek();
void display();

int main()
{
    int choice = 1;
    while(choice!=0){
        cout << "enter choice" << endl;
        cout << "1 for -------> pop" << endl;
        cout << "2 for -------> push" << endl;
        cout << "3 for -------> peek" << endl;
        cout << "4 for -------> display" << endl;

        cin >> choice;
        switch (choice)
        {
        case 1:
            pop();
            break;
        case 2:
            push();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        default:
            cout << "INVALID CONDITION" << endl;
        }
    } 
}

void pop()
{   
    
    int x;
    cout << "Enter Data" << endl;
    cin >> x;

    newnode = new node();
    newnode->data = x;
    newnode->next = top;
    top = newnode;
}

void push()
{int item;

 temp = top;
 if("top == 0"){
    cout<<"underflow condition"<<endl;
 }   
 else{
    top = top->next;
    free(temp);
 } 
}
void peek()
{
   cout<<top->data<<endl;
}

void display()
{
  temp = top;
  if(top == 0){
    cout<<"underflow condition"<<endl;
  } 
  else{
    while(temp!=0){
        cout<<temp->data<<endl;
        temp = temp->next;
    }
  } 
}