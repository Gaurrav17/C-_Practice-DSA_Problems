#include<iostream>
using namespace std;

/*int main(){
int i, j, k, n;

char ch;
    for(i=1; i<=3; i++){  
        ch = 'A' + (3 - i);  
        for(j=1; j<=3; j++){

cout<<ch;
ch = ch + 1;
    }    
    cout<<endl;
}
}*/


int main(){

    int i, j, l;
    static int k;
    


    /*for(i = 1; i<=3; i++){
        for(j = 1; j<=(3-i); j++){
            cout<<" ";
        }
         k = 1;
        for(j = 1; j<=2*i-1; j++){
           // k = i + j - i;
           if(j%2!=0)
            cout<<k;
            else
            cout<<" ";
          
        }
       /* for(; j<=2*i-1; j++){
           // k = i + j - i;
           if(i>2&&j%2==0)
            cout<<"2";
            else
            cout<<" ";
          
        }
        /*l = 2;
        for(j = 1; j<=(i - 1); j++){
            
            cout<<l;
            l = l+1;
        }*/

        //cout<<endl;
   // }
   for(i = 1; i<=5; i++){
         k = 5;
        for(j = 1; j<=2*5-1; j++){
           // k = i + j - i;
           if(i==1)
           cout<<k;
           
          
        }
        k--;
        cout<<endl;
   }
}