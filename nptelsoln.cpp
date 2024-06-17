#include <iostream>
#include <algorithm>
using namespace std;
//___________________INSERTION__________________||
/*int main()
{
    int i, size, pos, a[50],  num;
    cout << "enter the size of an arrays" << endl;
    cin >> size;
    cout << "enter the value of arrays" << endl;
    for (i = 0; i < size; i++)
    {  
        cin >> a[i];
    }
    cout << "the values of arrays are"<<endl;

    for (i = 0; i < size; i++)
    {
        cout << a[i]<<endl;
    }
    cout << "enter the number  you want to insert"<<endl;
    cin >> num;
    cout << "enter the postion where you want to insert"<<endl;
    cin >> pos;
    for (i = size - 1; i >= pos - 1; i--) // for begening for(i = size-1; i>=0; i--)
                                             //a[0] = num
    {                                     // for last no need of swapping
        a[i+1] = a[i];                        //a[size] = num
    }
     a[pos-1] = num; 
     size++;
     cout<<"inserted values are";
    
    for (i = 0; i < size; i++)
    {
        cout<<a[i]<<endl;
    }
}*/

//__________________DELETION___________________||
int main()
{
    int i, size, pos, a[50],  num;
    cout << "enter the size of an arrays" << endl;
    cin >> size;
    cout << "enter the value of arrays" << endl;
    for (i = 0; i < size; i++)
    {  
        cin >> a[i];
    }
    cout << "the values of arrays are"<<endl;

    for (i = 0; i < size; i++)
    {
        cout << a[i]<<endl;
    }


    cout<<"enter the position from where you want to delete"<<endl;
    cin>>pos;
   
   if(pos<=0||pos>size){
       cout<<"INVALID CONDITION"<<endl;
   }
else{
    for(i=pos-1; i<size-1; i++){
        a[i] = a[i+1];
    }

     size--;
     cout<<"your Deleted position are";

     for(i = 0; i<=size-1; i++){
         cout<<a[i]<<endl;
     }
}

}
  

