#include <iostream>
using namespace std;

//#define N 5;
int top = -1;
int stack[5];

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
    if (top == 4)
    {
        cout << "OVERFLOW CONDITION" << endl;
    }
    else
    {
        top++;
        stack[top] = x;
    }
}

void push()
{
    int item;
    if (top == -1)
    {
        cout << "UNDERFLOW CONDITION" << endl;
    }
    else
    {
        item = stack[top];
        top--;
        cout << "deleted item is" << item << endl;
    }
}
void peek()
{
    if (top == -1)
    {
        cout << "UNDERFLOW CONDITION" << endl;
    }
    else
    {
        cout << stack[top] << endl;
    }
}

void display()
{
    int i;
    for (i = top; i >= 0; i--)
    {
        cout << stack[i] << endl;
    }
}