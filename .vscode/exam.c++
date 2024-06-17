#include<iostream>
#include<cmath>
using namespace std;

class complex{
     int x, y;
     public:
     friend complex calcdist(complex o1, complex o2);  
     void points(int a, int b){
          x = a;
          y = b;
     }
     void displaypoints(){
          cout<<"("<<x<<","<<y<<")"<<endl;
     }
    //friend void calcdist();  
     };
    complex calcdist(complex o1, complex o2){
    int x_diff=o2.x-o1.x;
    int y_diff=o2.y-o1.y;
    double dist = sqrt((x_diff)*(x_diff) + (y_diff)*(y_diff));
    cout<<"Distance is :"<<dist<<" units"<<endl;  
    }
    int main(){
     complex p1, p2;
      p1.points(4, 7);
    
      void displaypoints();
      p2.points(5, 9);
     
      
     cout<<endl<<endl;
      calcdist(p1, p2);
     }