#include <iostream>
using namespace std;

//#define N 5;


struct node{
    int data;
    struct node *next; 
};

struct node *temp;
struct node *front = 0;
struct node *rare = 0;
struct node *newnode;



void enqueue();
void dequeue();
void display();
void peek();

int main()
{
    int choice = 1;
    while(choice!=0){
        cout << "enter choice" << endl;
        cout << "1 for -------> enqueue" << endl;
        cout << "2 for -------> dequeue" << endl;
        cout << "3 for -------> display" << endl;
        cout << "4 for -------> peek" << endl;

        cin >> choice;
        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            peek();
            break;
        default:
            cout << "INVALID CONDITION" << endl;
        }
    } 
}

void enqueue(){
    int x;
    cout<<"Enter Data"<<endl;
    cin>>x;
    newnode = new node();
    newnode->data = x;
    newnode->next = 0; 
    if(front == 0 && rare == 0){
        front = rare = newnode;
    }
    else{
        rare->next = newnode;
        rare = newnode;
    }
}

void display(){

    if(front == 0 && rare == 0){
        cout<<"UNDERFLOW CONDITION"<<endl;
    }
    else{
        temp = front;
        while(temp!=0){
            cout<<temp->data<<endl;
            temp = temp->next;
        }
    }
}

void dequeue(){
    temp = front;
    if(front == 0 && rare == 0){
        cout<<"UNDERFLOW CONDITION"<<endl;
    }
    else{
        front = front->next;
        free(temp);
    }
}

void peek(){
    if(front == 0 && rare == 0){
        cout<<"UNDERFLOW CONDITION"<<endl;
    }
    else{
        cout<<front->data<<endl;
    }
}