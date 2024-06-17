#include<iostream>
using namespace std;
class Number{
  

  int x, a;

  public:
  

Number(){ 
    a = 0;  
}

Number(int num){
a = num;
}

Number(Number &obj){
cout<<"copy constructor is"<<endl;
a = obj.a;
}
 
 void display(){
     cout<<"the number is"<<a;
 }
 
};

int main(){
    Number z;
    z.display();

    Number z1(z);
    z1.display();



}