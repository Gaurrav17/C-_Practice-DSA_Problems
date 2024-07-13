#include <iostream>
using namespace std;
void print(int);
int main(){

  print(7);
}
int mul = 1;
void print(int n){

    if(n==0){
    cout<<"your value is "<<n<<endl;
    return;
    }
    //cout<<"value is "<<n<<endl;
    mul = mul*n;
    cout<<"your multiply value "<<mul<<endl;
    print(n-1);
    cout<<"value is "<<n<<endl;
    
}