#include<iostream>
using namespace std;

class num{
    int count = 0;

public:

num(){
count++;
cout<<"this is the time when constructor called"<<count<<endl;
}

~num(){
count++;
cout<<"this is the time when disnstructor called"<<count<<endl;
}

    
};

int main(){

    cout<<"we are inside main function"<<endl;
    cout<<"creating first object n1"<<endl;

    num n1;{
     cout<<"we are entering the block"<<endl;
     cout<<"we are entering the block"<<endl;
     cout<<"creating two more object"<<endl;
     num n2, n3;
     cout<<"exsiting this block"<<endl;
    } 

    cout<<"back to main"<<endl;
return 0;
}