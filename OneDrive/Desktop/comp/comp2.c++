#include<bits/stdc++.h>
using namespace std;

int main(){

    map<string, int> t;
       int n = 5;

       for(int i =0; i<n; i++){
         string x;
         cin>>x;
         t[x]++;
       }
       //inserting element of map using pair
       t.insert({"ab", 5});
      // t.erase(ab);
       for(auto pr : t){
         cout<<pr.first<<"  "<<pr.second<<endl;
       }
}