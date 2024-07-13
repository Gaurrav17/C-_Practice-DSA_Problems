#include <bits\stdc++.h>

using namespace std;

void print(set<string> s){
for(auto value : s){
        cout<<value<<endl;
    }
}
int main(){

    set<string> s;
    s.insert("abc");
    s.insert("zsdf");
    s.insert("bcd");
    s.insert("abc");

    for(auto value : s){
        cout<<value<<endl;
    }

   s.erase("abc");
   /*if(it!=s.end()){
   cout<<*it<<endl;
   }*/
   int n;
   cin>>n;
   string str;
   for(int i = 0; i<n; i++){
        cin>>str;
        s.insert(str);
   }   
   print(s);
}