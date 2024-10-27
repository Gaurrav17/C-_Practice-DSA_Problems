#include<bits/stdc++.h>
using namespace std;


class Welcome {
  
   string name;
   int a_n, bal;
   static int total_customer;
 
   public:
   
    static void mtr(){
    cout<<"Inside "<<endl;
    }
  
       //   Welcome(string name, int a_n, int bal){
      //   this->name = name;
     //   this->a_n = a_n;
    //   this->bal = bal;
   //   total_customer++;
  //  }
    int s;
    void display(int s){
    this->s = s;
    cout<<"the s us "<<s<<endl;
    cout<<"Name: "<<endl;
    cout<<"AccountNumber: "<<endl;
    cout<<"balance "<<endl;
    cout<<"Total Customer Available is "<<endl;
   }

  void onlyS(){
    cout<<"only s value is "<<s<<endl;
  }



};

int Welcome::total_customer = 0;

int main(){
   
  Welcome A;
  A.display(5);
  A.onlyS();
  Welcome B = A;
  B.onlyS();
  //B.display(6);
  B.s = 6;
  A.onlyS();

  

}