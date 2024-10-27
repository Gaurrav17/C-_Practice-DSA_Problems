#include <bits/stdc++.h>
using namespace std;

class sack
{

public:
    int top;
    int *arr;
    int size;

    // sack(int size)
    // {
    //     this->size = size;
    //     arr = new int[size];
    //     top = -1;
    // }
    void alloc(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void pop()
    {
        
        if (top < 0)
        {
            cout << "UnderFlow Condition " << endl;
        }
        else
        {
            top = top - 1;
        }
    }
    void Push(int n)
    {
        
        if (top >= 4)
        {
            cout << "OverFLow Condition " << endl;
        }
        else
        {   
            top = top + 1;
            arr[top] = n;
        }
    }


    ~sack() {
        delete[] arr;
    }

    void peek()
    {

        if (top < 0)
        {
            cout << "UnderFlow Condition " << endl;
        }
        else
        {
            cout << "The value of your last element is " << arr[top] << endl;
        }
    }

    void display()
    {

        if (top < 0)
        {
            cout << "UnderFlow Condition " << endl;
        }
        else
        {
            for (int i = top; i >= 0; i--)
            {
                cout << "your stack element is " << arr[top--] << endl;
            }
        }
    }
};

int main()
{
    sack *s = new sack();
    s->alloc(5);
    s->Push(5);
    s->Push(10);
    s->Push(15);
    s->Push(20);
    s->pop();
    s->peek(); 
    s->display();

    delete s;
}