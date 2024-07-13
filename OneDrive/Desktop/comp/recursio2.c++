#include <bits/stdc++.h> 
using namespace std;

//void sort(vector<int>);
//void insert(vector<int>, int);

  



/*void insert(vector<int> &v, int temp){
   cout<<"value of temp is "<<temp<<endl; 
   cout<<"size of the vector is "<<v.size()<<endl;
   if(v.size()==0 || (v[v.size()-1])<=temp){
   v.push_back(temp);
   return;  
}
int val = v[v.size()-1];
 //cout<<"inside sort function "<<endl;
v.pop_back();
insert(v, temp);
v.push_back(val);
return;
} */

list<int> s;
int mx = 0;
void sort(vector<int> &v){
  //cout<<"inside insert function "<<endl;
  
  if(v.size()==1){
    return ;
  }
int temp = v[v.size()-1];
cout<<"your value is "<<temp<<endl;
v.pop_back();
sort(v);
//insert(v, temp);
//cout<<"Something "<<temp<<endl;
 //v[-1] = 0;
 
 cout<<"your v[0] values is "<<v[0]<<endl;
  static int k = 1;
 cout<<"value of k is "<<k<<endl;
for(int i = 0)
  cout<<"something "<<endl;
  for(auto i : s){
   cout<<i<<endl;
  }
   
}

int main(){
 
 vector<int> v;
 int n;
 cout<<"enter "<<endl;
 cin>>n;

 for(int i=0; i<n;  i++){
     int x;
     cin>>x;
     v.push_back(x);
 } 
 //s.push_back(v[0]);
 int fg =  v[0];
 sort(v);
 s.push_front(fg);
cout<<"your is "<<endl;
for(auto i : s){
   cout<<i<<endl;
  }
 
}


