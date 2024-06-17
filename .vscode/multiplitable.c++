#include<iostream>

using namespace std;

/*int main()
{
  int i, n, table;

  cout<<"enter the table you want to print"<<endl;
  cin>>n;
  
  for(i=1; i<=10; i++){

      table = n*i;
      /*if(i==5){
        continue;
    }*/
      //cout<<n<<" * "<<i<<" = "<<table<<endl;
    
    //if(i==5){
       // continue;
    /*}
  }
 // cout<<table;


}*/

//************>>>>Printing an arrays using differnt loop**********<<<<<<<<,

/*int main(){
  int i=0;
int a[4];
int*p=a;
a[0]=5;
a[1]=6;
a[2]=7;
a[3]=8;
cout<<*(++p)<<endl;
cout<<*p<<endl;*/
//a[2]=455;
/*for(*p=0; *p<4; *p++){
  cout<<*p<<endl; */
//}
/*do{
  cout<<a[i]<<endl;  
 i++;

}

while(i<4);*/

//*****************>>>>>>>>function declaration initilization****************<<<<<<<<<

 /*int product(int*, int*);


int main(){
//int a, b;

int a=9, b=12;
cout<<"indide main function"<<a<<endl<<b<<endl;
 cout<<product(&a, &b);
 cout<<"value outside main function"<<a<<b<<endl;
}

int product(int* x, int* y){
    *x=10, *y=18;
    int c;   

  /*cout<<"enter the value of A"<<x<<endl;
  cin>>*x;
  cout<<"enter the value of B"<<y<<endl;
  cin>>*y; 
  cout<<"outside function"<<a<<b;*/
 // c= *x+*y;
 // return c;
 //****************>>>>>>>>reverse of the number*****************<<<<<<<<<<<<<

 int main(){

   int rev, rem, n;


   cout<<"enter the numbers the reverse"<<endl;
   cin>>n;

   while(n!=0){
     
     rem = n%10;
     //cout<<rem<<endl; 
     rev = rev*10 +rem;

     n= n/10;
    // cout<<"reverse of the number is"<<endl;
     //cout<<rev;


   }
   cout<<"reverse of the number is"<<rev;
 }


 


