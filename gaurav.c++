/*#include <iostream>

using namespace std;

int main()
{
   //cout<<"hello world";
    return 0;
}*/
#include<iostream>
using namespace std;

int main(){
    int a[3][3] = {6, 2, 5, 0, 1, 3, 4, 9, 8};
    int*p;

    p = &a[0][0];
    cout<<**a<<endl;

}