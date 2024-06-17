#include<iostream>
using namespace std;

class shopitem{
   int id;
   float price;
   public:
   void setdata(int a, float b){
      id = a;
      price = b;
   }
   void getdata(){
      cout<<"id of the item is"<<id<<"and price is "<<price<<endl;
   }
};
int main(){
   int size = 3;
shopitem  *ptr = new shopitem[size];
shopitem* ptrtemp = ptr;
int p, q, i;
for(i=0; i<size; i++){
   cout<<"Enter ID and price of the  item "<<i+1<<endl;
   cin>>p>>q;
   ptr->setdata(p, q);
   ptr++;
}
for(i=0; i<size; i++){
   cout<<"item numer "<<i+1<<endl;
   ptr->getdata();
   ptrtemp++;
}
}