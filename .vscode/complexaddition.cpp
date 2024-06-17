#include<iostream>
using namespace std;
class complex{

int a, b;

public:
friend  complex sumofC1C2(complex a1, complex a2);
void setdata(int b1, int b2){
   a = b1;
   b = b2;

  
}
//friend complex sumofC1C2(complex a1, complex a2);
void printdata(){
      
   cout<<a<<"+i"<<b<<endl;
}
//friend complex sumofC1C2(complex a1, complex a2);
//*************>>>>>>>Passing object as a function Arguments<<<<<<<<<<**************

/*void sumofC1C2(complex a1, complex a2){
 
    a = a1.a + a2.a;
    b = a1.b + a2.b;

}*/



};
complex  sumofC1C2(complex a1, complex a2){
 
   int x  = a1.a + a2.a;
    int y  = a1.b + a2.b;
  cout<<x<<" + "<<y<<"i"<<endl; 
}

int main(){
   complex c1, c2, c3;
    c1.setdata(3, 4);
    c1.printdata();

    c2.setdata(1, 5);
    c2.printdata();

    c3 = sumofC1C2(c1, c2);
    c3.printdata();

}