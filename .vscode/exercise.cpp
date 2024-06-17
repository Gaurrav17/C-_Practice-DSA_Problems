#include <iostream>
#include <cmath>

using namespace std;

class calculator
{
    int x, y;

public:
    void set_data(int a, int b)
    {
        x = a;
        y = b;
    }
    void asmdv()
    {
        cout << "your addition of the number is " << x << " + " << y << " is " << x + y << endl;
        cout << "your multiplication of the number is " << x << " * " << y << " is " << x * y << endl;
        cout << "your division of the number is " << x << " / " << y << " is " << x / y << endl;
        cout << "your substratction of the number is " << x << " - " << y << " is " << x - y << endl;
    }
};

class sciencetific_calculator
{
    int z;

public:
    void set_number(int d)
    {
        z = d;
    }
    void cntific()
    {
        cout << "sin z = " << std::sin(z) << endl;
        cout << "cos z  = " << std::cos(z) << endl;
        cout << "tan z = " << std::tan(z) << endl;
        cout << "sec z = " << 1 / z << endl;
    }
};
class hybrid_calculator : public sciencetific_calculator, calculator
{
public:
    void display1()
    {
        set_data(5, 6);
        asmdv();
    }
    void display2()
    {
        set_number(5);
        cntific();
    }
};

int main()
{
    hybrid_calculator a;
    a.display1();
    a.display2();
    /* calculator a;
     int k, v, t;
     cout << "please enter the number" << endl;
     cin >> k >> v;
     a.set_data(k, v);
     a.asmdv();
     sciencetific_calculator b;
    // cout<<"enter the value of t"
     b.set_number(10);
     b.cntific();   */
}