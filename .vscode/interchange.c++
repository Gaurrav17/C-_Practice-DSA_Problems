#include<iostream>
using namespace std;

int main(){

    int i, j, temp;
   // int k, l = 4, m;

    int a[8] = {2, 4, 8, 7, 6, 12, 9, 7};
for(i=0; i<8; i++){
  cout<<a[i]<<endl;
}     

/*for(j=0; j<5; j++){
    
    /*while(a[i]%2==0){
        i++;
    }
    while(a[k]%!==0){
        k++
    }*/

  /* for(i=0; i<5; i++){

      while(a[j]%2==0){
          j++;
      }
      while(a[l]%2!=0){
          l--;
      }
      if(a[j]!=a[l]){
          a[j] = temp;
          a[j] = a[l];
          temp = a[l];

      
      }   // cout<<a[k]<<endl;
      
      for(i = 0; i<5; i++){   
          cout<<a[i]<<endl;
      }*/
      ///for(i=0; i<8; i++){

          for(i=0; i<8; i++){  


              if((a[i]%2==0) || (a[i+1]%2!=0)){
                  if(a[i] != a[i+1]){
  
                 temp = a[i];
                  a[i] = a[i+1];
                  a[i+1] = temp;
                  //break;

              }
              }
         
          }
         // cout<<a[i]<<endl;
     // }
   cout<<"value after sorts is"<<endl;
for(i=0; i<8; i++){ 
      cout<<a[i]<<endl; 
   } 
}
      