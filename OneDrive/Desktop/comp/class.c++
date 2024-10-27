#include<bits/stdc++.h>
using namespace std;

class Hello{


int hi = 10;

public:

int bye= 16;

void getValue(){
cout<<"Value of The Hi is "<<hi<<endl;
}

void setValue(int data){
   hi = data;
}
 

Hello(){
    
}

void display(int hi){
    cout<<"This is display "<<this->hi<<endl;
    cout<<"Name Ji Ka by value "<<bye<<endl;;
}

};

 int main(){
 Hello b;
 b.bye = 55;
 //b.getValue();
 b.setValue(100);
 b.display(12);
 Hello c(b);
 c.display(2);
 

}