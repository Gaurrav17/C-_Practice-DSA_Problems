#include <iostream>
using namespace std;

/*class Employe{


public:
    int id;
    float salary;

Employe(int idpd){
    id = idpd;
    salary = 34;
}
Employe(){}
};

class program : public Employe{
public:
program(int idpd){
    id = idpd;
    salary = 34;
}
void getdata(){
    cout<<id<<endl;
}
};

int main(){
    Employe Gaurav(1), saurav(2);
    //cout<<Gaurav.salary<<endl;
    program rahul(1), rohan(2);
    rahul.getdata();
    cout<<rahul.salary<<endl;
    //cout<<rohan.salary<<endl;
   // cout<<rohan.id<<endl;
    return 0;
}*/
/*class base{

  int data1;
    public:
    int data2;
    void setdata();
    int getdata2();
    int getdata3();
};

 void base :: setdata(void){
    data1 = 20;
    data2 = 10;
 }

 int base :: getdata2(){
     return data1;
 }
 int base :: getdata3(){
     return data2;
 }


class procedure : private base{
    public:
     int data3;
     void process();
     void display();
};

void procedure :: process(void){
    setdata();                     //we can caccess with in the class only
    data3 = data2*getdata2();
}
void procedure :: display(void){
    cout<<"the value of get data1 is"<<getdata2()<<endl;
    cout<<"the value of get data2 is"<<data2<<endl;
    cout<<"the value of get data3 is"<<data3<<endl;
}
int main(){
      procedure pro;
     // pro.setdata(); // we can not acces this function when visiability mode of class is private
      pro.process();
      pro.display();


}*/

class students
{
protected:
    int roll_number;
    string s;

public:
    void set_roll_number(int);
    void get_roll_number();
};

void students ::set_roll_number(int r)z
{
    s = "Gaurav";
    cout<<"name of the students is  "<< s<<endl;
    roll_number = r;
}
void students ::get_roll_number()
{
    cout << "the roll number is " << roll_number << endl;
}

class exam : public students
{
protected:
    float math;
    float phyics;

public:
    void setmarks(float m1, float m2)
    {
        math = m1;
        phyics = m2;
    }
    void getmarks()
    {
        cout << "the marks obtained in math is " << math << endl;
        cout << "the marks obtained in phyics is " << phyics << endl;
    }
};

class result: public exam{
    float percent;

    public:
    
    void calcpercent(){
        get_roll_number();
        getmarks();
        cout<<"total percentage of student "<<(math+phyics)/2<<endl;
    }
};

int main(){
    result Gaurav;

    Gaurav.set_roll_number(8);
    Gaurav.setmarks(92.02, 91.8);
    Gaurav.calcpercent();
}
