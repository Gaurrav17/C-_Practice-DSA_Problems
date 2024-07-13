#include<iostream>
using namespace std;
void pop(int a[]);
void push(int, int a[]);
//void sort(int[]);
void insert(int[], int);
void dete(int[]);
int ma = 5;
int a[5];
int top = -1;
int main(){   
    int x;
    for(int i = 0; i<4; i++){
        cout<<"enter your stck vbalue"<<endl;
        cin>>x;
        push(x, a);
    }
    //sort(a);


    cout<<"your sorted value is "<<endl;
    for(int i = top; i>=0; i--){
        cout<<a[i]<<endl;
    }
    dete(a);
    cout<<"your sorted value is "<<endl;
    for(int i = top; i>=0; i--){
        cout<<a[i]<<endl;
    }
    /*for(int i = top; i>=0; top--){
        cout<<a[i]<<endl;
    }*/
  
   
    /*cout<<a[top]<<endl;
    cout<<a[top-1]<<endl;
    cout<<a[top-2]<<endl;
    cout<<a[top-3]<<endl;
    cout<<a[top-4]<<endl;*/
}

   void push(int s, int a[]){   
     if(top == 3){
        cout<<"overflawed condition"<<endl;
     }
     else if(top ==  -1){
        top = 0;
        a[top] = s;
     }
     else{
        ++top;
        a[top] = s;
     }
}

void dete(int a[]){  
  int mid = top/2;
  int val = top;
  if(val%2==0){
  cout<<"inside dete function "<<endl;
  cout<<"value "<<val<<endl;
  cout<<"raw mid value "<<mid<<endl;
  cout<<"your mid valus is "<<a[mid]<<endl;
  for(int i = mid; i<=top; i++){
      a[i] = a[i+1];
  } 
  top = val -1;
  }
  else{
  cout<<"inside dete function "<<endl;
  cout<<"value "<<val<<endl;
  cout<<"raw mid value "<<mid<<endl;
  cout<<"your mid valus is "<<a[mid]<<endl;
    for(int i = mid; i<=top; i++){
      a[i] = a[i+1];
  }
  cout<<"inside dete function "<<endl;
  cout<<"value "<<val<<endl;
  cout<<"raw mid value "<<mid+1<<endl;
  cout<<"your mid valus is "<<a[mid+1]<<endl;
  mid = (val-1)/2;
  for(int i = mid+1; i<=top; i++){
      a[i] = a[i+1];
  }
  }
  top = val - 2;
}

/*void insert(int a[], int temp){
      if(temp<=a[top] || top==-1){
        push(temp, a);
        return;
      }
      int val = a[top];
      pop(a);
      insert(a, temp);
      push(val, a);
      return;
}

void sort(int a[]){
    if(top==0){
        return;
    }
    int temp = a[top];
    pop(a);
    sort(a);
    insert(a, temp);
}*/


void pop(int a[]){
    if(top == -1){
        cout<<"underflow vondion"<<endl;
    }
    else if(top == 0){
         top = -1;
    }
    else{
         top = top-1;
    }
}