#include<iostream>
using namespace std;
//int search(int*, int, int);

/*int print(int a[], int m){
  int i, j=0, c  ;
    for( i=0; i<m; i++){
     //c = c^a[i];
    c = 1;
      for( j=0; j<m; j++){ 
        if(i!=j){   
      if(a[i]==a[j]){
        c++;
      }
    }   
      } 
    if(c>1){ 
    cout<<c<<endl;
    break;
}             
    }    
}*/
  


//return a[i];


/*void SwapAlternate(int a[], int m){
    int i, swap;
    for(i=0; i<m; i+=2){
       if(i+1<m){
        swap = a[i+1];
        a[i+1] = a[i];
        a[i] = swap;

        }          
    }     
 }*/


/*int main(){
    int i, n, a[100];

    cout<<"enter the arrays";
    cin>>n;
for(i=0; i<n; i++){
    cin>>a[i];
}
cout<<"your elements are";

cout<<"value after swap is";
//SwapAlternate(a, n);
print(a, n);
}*/
int pivot(int a[], int b){
  int start, end, mid, res, found = 0;
 start = 0 ;
 end = b - 1;
while(start < end){
  
  mid = (start + end)/2;

  if(a[mid] > a[0]){
       start = mid +1;
  }
  else{
     end = mid;
}
}

return start;

}
int binarysearch(int a[], int b, int c){
  int start, end, mid, res, found = 0;
 start = 0 ;
 end = b - 1;
while(start<=end){

  if(a[mid]>c){
    end = mid - 1;
}

else if(a[mid]==c){
  cout<<mid;
}
else{
  start = mid + 1;
}

}
}
/*int lastoccurance(int a[], int b, int c){
  int start, end, mid, res;
 start = 0;
 end = b - 1;
while(start<=end){
  
  mid = (start+end)/2;
 if(a[mid] == c){
   res =  mid;
   start = mid + 1;
 }
else if(a[mid] > c){
   end = mid - 1;
}
else{
 start = mid + 1;
}
}
return res;
}*/

int main(){
  int  a[20],start, n, i,key, max = 0, k;
 cout<<"enter the value of n"<<endl;
 cin>>n;
 int  count, j;
 cout<<"enter the value of arraeys"<<endl;
 for(i=0; i<n; i++){
  cin>>a[i];
 }

 
 
  
/*cout<<"enter the value of the key"<<endl;
cin>>key;*/

int p = pivot(a, n);
cout<<p;

if(key>a[p]){
  
  binarysearch(a,)
  
}



//cout<<lastoccurance(a, n, key)<<endl;





}