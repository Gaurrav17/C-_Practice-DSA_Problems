#include<iostream>
using namespace std;

int main(){
int i, j;
int a = 1;
for(i=1; i<=5; i++){
for(j=1; j<=i; j++){  
    //a = 1;   
    if(((i+j)%2)==0){
cout<<"1";
    }
    else{
        cout<<"0";
    } 
//a++;     
}
//a++;
cout<<endl;
}
return 0;
}