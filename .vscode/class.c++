#include<iostream>
#include<cmath>

using namespace std;

/*class Animal{
  
   private:
 
 int  a;
  
 public:
 string name;

  void setdata(int a);

  void getdata(){

      cout<<"age of the animal"<<a<<endl;
      cout<<"name of the animal"<<name<<endl;

  }
};
void Animal :: setdata( int b){
    
    //int b;
    a=b;
   // age = d;
}
  int main(){ 
    Animal kangaro;

       //get(a);

    kangaro.name = "kangaro";
    kangaro.setdata(4);
    kangaro.getdata();
    //kangaro.age = 56;
      return 0;*/

class Employs{

 int count = 0;

public:

int id;

void setdata(void){
cout<<"Enter the employes ID";
cin>>id;

}

void getdat(){
  cout<<"count of the employs is"<<count<<"and id is"<<id<<endl;
  count++;


}

};

//int Employs:: count=1;



int main()
{
  Employs Harry, rohan, lavish;

  Harry.setdata();
  Harry.getdat();

  lavish.setdata();
 lavish.getdat();

rohan.setdata();
rohan.getdat();

//Harry.setdata();
//Harry.getdat();

}