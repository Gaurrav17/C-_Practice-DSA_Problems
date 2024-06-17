#include<iostream>
using namespace std;

/*template <class T>
class vector{
    public:
    T* arr;
    T size;
    vector(T m){
        size = m;
        arr = new T[size];
    }

    
    int dotproduct(vector v){
        int d=0;
        for (T i = 0; i < size; i++)
        {
            d+=this->arr[i] * v.arr[i];
        }
        return d;

    }

};

int main(){
    int a, j;
    vector <int> v1(3);
    v1.arr[0] = 1;
    v1.arr[1] = 2;
    v1.arr[2] = 2;
    vector <int> v2(3);
    v2.arr[0] = 1;
    v2.arr[1] = 2;
    v2.arr[2] = 2;

    a = v1.dotproduct(v2);
    cout<<a<<endl;
}*/

// with multiple templates  .   

template<class T, class U>
class myclass{
    public:
    int data1;
    float data2;
    myclass(T x, U y){
        data1 = x;
        data2 = y;
    }
    void display(){
        cout<<data1<<endl<<data2<<endl;
    }

};
int main(){
    myclass<int, float>v(4, 4.5);
    v.display();

}

