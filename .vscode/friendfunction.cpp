#include<iostream>
using namespace std;
class complex{
 
 int a; int b;

 public:

void setdata(int a1, int a2){

  //cin>>a>>b;
  a = a1;
  b = a2;

 }

 void printdata(){
    
    cout<<a<<"+i"<<b<<endl;;


 }
 
 //Below lines means that non members  - sum complex function is allowed to do any thing with my private members 
 
 friend complex sumsetdata(complex o1, complex o2);
};

complex sumsetdata(complex o1, complex o2){

    complex o3;
 o3.setdata((o1.a+o2.a), (o1.b+o2.b));
return o3;

}
 
int main(){
  
  complex c1, c2, c3;
  c1.setdata(3, 4);
  c1.printdata();

  c2.setdata(5, 6);
  c2.printdata();

  c3 = sumsetdata(c1, c2);
  c3.printdata();

}






