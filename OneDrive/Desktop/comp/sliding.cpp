#include<bits/stdc++.h>
using namespace std;
/*q1 making sum sub aray*/
/*q2 first negative number of every  sub arry*/
/*q3 count occurance of anagrams*/
/*q4 return maximum  sum of all sub array*/
/*q5 minimum window substring*/
void maxsum();
void negsubarray();
void countanagrams();
void maxubarray();
void minwinsubstr();
int k = 3;
int main(){
     //maxsum();
     //negsubarray();
     //countanagrams();
     //maxubarray();
     minwinsubstr();
}   

/*void maxsum(){
 int i = 0;
    int j = 0;
    int mx = INT_MIN;
    int a[5] = {1, 2, 3, 4, 5};
    
    int sum = 0;
    while(j<5){
    sum = sum + a[j];
    if(j-i+1<k){
        j++;
    }
    else if(j-i+1==k){
        i++;
        mx = max(mx, sum);
        i++;
        j++;
        sum = sum - a[i]; 
    }
       
    }
     cout<<mx<<endl;
}*/
/*void negsubarray(){
 
  int i = 0;
  int j = 0;
  int check = 1;
  vector<int> v;
  vector<int> l;*/
  /*while(j<5){
  /*if(b[j]<0){
      v.push_back(b[j]);
    }*/
   /* if(j-i+1<k){
      j++;
    }
    else if(j-i+1==k){
      if(v.size()==0){
      l.push_back(0);
    }
      else{
        l.push_back(v.front());*/
       /* if(b[i]==v.front()){
           v.erase(v.begin());
        }*/
      //}
      //i++;
      //j++;
    //}
  //}
 // cout<<"your first non negative number is"<<endl;
  //for(int i = 0; i<l.size(); i++){
   // cout<<l[i]<<endl;
  //}
//} */

/*void countanagrams(){  
  int i = 0;
  int j = 0;


}*/

void maxubarray(){
     int i = 0; 
     int j = 0;
     int sum = 0;
     vector<int> v;
     list<int> l;
     int a[8] = {1, 3, -1, -3, 5, 3, 6, 7};
    
     
     while(j<8){  

      while(l.size()>0 && l.back()<a[j]){
         l.pop_back();
        }
        l.push_back(a[j]);
        if(j-i+1==k){
          j++;
        }
        else if(j-i+1==k){
          v.push_back(l.front());
          if(a[i]==l.front()){
            l.pop_front();
          }
          i++;
          j++;
        }
     }  

     std::cout<<"your answer"<<endl;
     for(int i = 0; i<v.size(); i++){
      std::cout<<v[i]<<endl;
     }

}

void minwinsubstr(){
  int i = 0;
  int j = 0;
  string s =  "ADOBECODEBANC";
  string t ="ABC";
  int count  = 0;
  map<char, int> mp;
   

}