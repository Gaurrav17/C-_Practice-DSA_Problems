#include<iostream>
using namespace std;

class base{
    int data1;
    public:
    base(){}
    base(int a){
        data1 = a;
    }
    void printdata1(){
        cout<<data1<<endl;
    }
};
class base2{
    int data2;
    public:
    base2(){}
    base2(int a){
        data2 = a;
    }
    void printdata2(){
        cout<<data2<<endl;
    }
};

class derived: public base, public base2{
    int derived1, derived2;
    public:
     derived(int b, int c,int d, int e): base(b) , base2(c){
        derived1 = d;
        derived2 = e;
        cout<<"derived class constructors called"<<endl;
    }
void printdata3(){
    cout<<derived1<<endl;
    cout<<derived2<<endl;
}
};

int main(){
  derived Gaurav(4, 5, 6,7);
  Gaurav.printdata1();
  Gaurav.printdata2();
  Gaurav.printdata3();
}