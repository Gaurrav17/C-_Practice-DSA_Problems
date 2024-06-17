#include<iostream>
#include<math.h>
#include<string>  

using namespace std;

/*int main(){

int n;

cout<<"Enter the Number in Binary format";
cin>>n;
int ans;
int i = 0;
int d = 0;
int k;
int r = 0;
int l;
l = n;
int dec = 0;

while(l!=0){
  dec = (dec<<1)|1;
  l = l>>1;

}

ans = (~n)&dec;
cout<<ans;
}*/


/*string t;
int mask = 7;*/
/*while(n!=0){
 int bit = n&1;
  ans = (bit*pow(10, i)) + ans;
  k = bit;
  if(k==0){
    k = 1;
  }
  else if(k==1){
   k = 0;
  } 
 r = (k*pow(10, i)) + r;
  n = n>>1;  
   i++; 
}*/

/*7
cout<<ans<<endl;
cout<<r<<endl;
int t = r;
while(t!=0){
  l = t&1;
  dec = l*pow(2, d) + dec;
   t = t>>1;
  d++;
}

cout<<dec<<endl;

}
  
/*cout<<ans<<endl; 
cout<<"if numer is negative";
}*/

/*int main(){
  int i, j, k=0, n ;
  for(i = 5; i>=1; i--){
    for(j = 1; j<=i; j++){
      cout<<j;
    }   
    for(j = 1; j<=k; j++){
      cout<<"*";      
    }
 k = k+2;
 n = i;
 for(j = 1; j<=i; j++){
      cout<<n-- ;      
    }

    
    cout<<endl;
  }
  
 
}*/
void getmax(int a[], int m){
  int max = 0;
  for(int i=0; i<=m; i++){
   if(a[i]>max){
     max = a[i];
   }
  
}
 cout<<max;

}

int main(){
  int a[10], i, n;
  cin>>n;
  cout<<"enter the arrays";

  for(int i=0; i<=4; i++){
    cin>>a[i];
  }

 for(int i=0; i<=4; i++){
    cout<<a[i]<<endl;
  }
  cout<<"after finding maxium"<<endl;
  getmax(a, 4);
  }
  



