#include <bits/stdc++.h>
using namespace std;

class A
{


public:
    void display()
    {
        cout << "Method hi hai Auro kch Nahi hai " << endl;
    }

     void hnji()
    {
        cout << "hanjo hanjo ...." << endl;
    }


public:
   
    A()
    {
        cout << "I am constructor if class A" << "5" << endl;
    }
};

class B : public A
{


       public:
       void display(){
         cout<<"Method hi  "<<endl;
     }

public:
    B(int data)
    {
        cout << "I am constructor of class B" << endl;
    }

   

    void fun()
    {
        cout << "I am function anythis else i can do yo for you sir " << endl;
    }

private:
    void hnji()
    {
        cout << "any thing is there for me sir " << endl;
    }
};

class C : public B
{
public:
    int a;

    void fun()
    {
        cout << "I am function anythis else i can do yo for you sir " << endl;
    }

    private:
    void hnji()
    {
        cout << "any thing me sir " << endl;
    }

    // C()
    // {
    //     cout << "I am constructor of class C " << endl;
    // }
};

void wantAccess(){
  // B *a = new B(); 
}

int main()
{
    // B b;
    B* a;
    a->fun();
   // a->hnji();
   // a->fun();
    cout << "Welcome Holiday " << endl;
}