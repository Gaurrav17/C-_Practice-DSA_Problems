#include<iostream>
#include<cmath>
using namespace std;
class points{

    int x,y;
    public:

    void setpoints(int a, int b){
    x = a;
    y = b;
    }

    void printdata(){
    cout<<"("<<x<<","<<y<<")"<<endl;
    }
  void calcdist();  
  
};

void points  :: calcdist(){
    //points d;
     
   /* int x_diff=o2.x-o1.x;
int y_diff=o2.y-o1.y;
double dist = sqrt((x_diff)*(x_diff) + (y_diff)*(y_diff));*/
cout<<"Distance is :"<<a<<"units";

}

int main(){
points p1, p2;
p1.setpoints(7,9);
p1.printdata();
p2.setpoints(80,90);
p2.printdata();
calcdist(p1, p2);




}