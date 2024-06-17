#include<iostream>

using namespace std;

/*int main(){
  int n, i, f;

  cin>>n;

  for(i=n-1; i<n; i--){
      if(i==0){
     break;
      }
     n= n*i;
     //if(i==0)}
     //break;
//cout<<f<<endl;
  }
  cout<<n<<endl;
*/

int factorial(int);
int fabu(int);

int main(){
   
   int n;

   cin>>n;
   cout<<factorial(n)<<endl;
   cout<<fabu(n)<<"position at"<<endl;

}

int factorial(int x){
 int  c;
 if(x==1||x==0){
     return 1;
 }
 c= x*factorial(x-1);
 return c;

}
int fabu(int x){
    int k;
    if(x==1||x==0){
     return 1;
 }

  k =  fabu(x-2) + fabu(x-1);
return k;
}

