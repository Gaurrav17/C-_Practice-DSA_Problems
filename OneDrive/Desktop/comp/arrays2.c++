#include<bits/stdc++.h>
using namespace std;
void question1GFG(vector<int>);
void question2GFG(vector<int>);
void question3GFG(vector<int>);
/* question 1: Given an array of elements of length N, ranging from 0 to N – 1
. All elements may not be present in the array. If the element is not present
 then there will be -1 present in the array.
  Rearrange the array such that A[i] = i and if i is not present, display -1 at that place.*/

  /*question 2: Given an array of random numbers, Push all the zero’s of a given array to the end of the array. For example, 
  if the given arrays is {1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0}, it should be changed to {1, 9, 8, 4, 2, 7, 6, 0, 0, 0, 0}.
   The order of all other elements should be same. 
  Expected time complexity is O(n) and extra space is O(1).*/
  
  /*question 3: Given a sorted array of positive integers.
   Your task is to rearrange the array elements alternatively i.e first element should be max value,
   second should be min value, third should be second max, fourth should be second min and so on.*/

int main(){
 vector<int> z;
 unordered_set<int> a;

 int n, x;;
 cin>>n;
 for(int i = 0; i<n; i++){
    cin>>x;
    z.push_back(x);
 }

 
   //question1GFG(z);
   //question2GFG(z);
     question3GFG(z);
}




/*void question1GFG(vector<int> z){
    unordered_set<int> a;
for(int i = 0; i<z.size(); i++){
    if(z[i]!=-1){
    a.insert(z[i]);
    }
 }

 for(int i =0; i<z.size(); i++){
    if(a.find(i) != a.end()){
      z[i] = i;
    }
    else{
        z[i] = -1;
    }
 }
 cout<<"your output is"<<endl;

 for(int i = 0; i<z.size(); i++){
    cout<<z[i]<<endl;
 }
}*/

/*void question2GFG(vector<int> z){
     int s =  z.size();
     //int wap;
     //int k = 0;
     //int visted = 100;
      vector<int> temp;
      cout<<"in function"<<endl;
    for(int i = 0; i<z.size(); i++){
       //for(int j =0; j<z.size(); j++)
       //vector<int> temp;
       if(z[i]!=0){
         temp.push_back(z[i]);
       }
    }
    cout<<"Your Output"<<endl;
    for(int i = 0; i<temp.size(); i++){
        //if(temp[i]>0){
         cout<<temp[i]<<endl;
        //}
        //else{
         //cout<<"0"<<endl;
        }
    }*/

   void question3GFG(vector<int> z){
      sort(z.begin(), z.end());
      int j = z.size();
      vector<int> temp;
      vector<int> flag;
      int k = j/2;
      cout<<"the value of"<<j/2<<endl;
      for(int i = k ; i<z.size(); i++){
         temp.push_back(z[i]);
      }
      cout<<"your temp values"<<endl;
      for(int i = 0; i<temp.size(); i++){
         cout<<temp[i]<<endl;
      }
      cout<<"your flag value"<<endl;
      
      for(int i = 0; i<j/2; i++){
          flag.push_back(z[i]); 
      }
      for(int i =0; i<flag.size(); i++){
         cout<<flag[i]<<endl;
      }
      cout<<"your output"<<endl;
      int r = temp.size()-1;
      int b = 0;
      for(int i = 0; i<z.size(); i++){
         if(i%2==0){
            cout<<temp[r]<<endl;
            r--;

         }
         else if(i%2!=0){
            cout<<flag[b]<<endl;
            b++;
         }
      }
   }
