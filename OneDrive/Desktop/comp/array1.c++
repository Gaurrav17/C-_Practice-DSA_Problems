//left and right rotation of an array;
#include<bits/stdc++.h>
using namespace std;
//void leftrotation(int, int);
void leftrotation(int a[], int);
void leftrotation2(int a[], int);
void rightrotation(int a[], int);
void secondlargest(int a[]);
void largestthree(int a[]);
void movezeroes(int a[]);

int main(){
int a[10];

for(int i = 0; i<5; i++){
    cin>>a[i];
}
int d;

cout<<"enter the position from where you want to rotate the array"<<endl;
cin>>d;
  //leftrotation(a , d); 
  //leftrotation2(a, d);
  rightrotation(a, d);
  //secondlargest(a);
  //largestthree(int a[]);
 //movezeroes(a);
}

/*void  leftrotation(int a[] , int k){
   int temp[5];
 int b = 0;
 cout<<"in the functionn"<<k<<endl;
   for(int i = k; i<5; i++){
    temp[b] = a[i];
    b++;
   } 
   for(int i = 0; i<5; i++){
        temp[b] = a[i];
        b++;
   }
   
   for(int i = 0; i<5; i++){
    a[i] = temp[i];
   }
   cout<<"from function 1"<<endl;
  for(int i = 0; i<5; i++){
    cout<<a[i]<<endl;
   }

}*/

/*void leftrotation2(int a[], int k){
          int p = 0;
          int last;
          while(p<k){
             last = a[0];
             for(int i = 0; i<4; i++){
              a[i] = a[i+1];
             } 
             a[4] = last;
             p++;
          }
          cout<<"from function 2"<<endl;
          for(int i = 0; i<5; i++){
          cout<<a[i]<<endl;
   }
            
}*/

void rightrotation(int a[], int k){
    k = k%5;
    int t = 0;
    vector<int> temp;

    cout<<"your right rotated arrays are"<<endl;
    for(int i = 0; i<5; i++){
      if(i<k){
        //cout<<a[5+i-k]<<endl;
        temp.push_back(a[5+i-k]);
           t++; 
      }
      else{
       // cout<<a[i-k]<<endl;
       temp.push_back(a[i-k]);
       t++;
      }
    }

    for(int i =0; i<5; i++){
      cout<<temp[i]<<endl;
      t++;
    }
}

/*void secondlargest(int a[]){
  int max = 0;
  for(int i = 0; i<5; i++){
    if(a[i]>max){
      max = a[i];
    }
    
  }
  cout<<max<<endl;
  int min = 0;
  for(int i = 0; i<5; i++){
    if(a[i]>min&&a[i]!=max){
      min = a[i];
    }
  }
  cout<<"minimum than larger value"<<min<<endl;

}

void largestthree(int a[]){

}

void movezeroes(int a[]){
  int temp[5];
  int temp2[5];
    for(int i = 0; i<5; i++){
       if(a[i]==0){
        temp[i] = 0;
       }
       else{
         temp[2] = a[i];
       }
    } 
    for(int i = 0; i<temp2.len(); i++){
      cout<<temp2[i]<<endl;
    }
    for(int i = 0; i<temp.size(); i++){
      cout<<temp[i]<<endl;
    }
    
}*/