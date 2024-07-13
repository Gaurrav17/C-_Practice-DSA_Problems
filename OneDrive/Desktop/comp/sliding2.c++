#include<bits\stdc++.h>
using namespace std;

/*q1 largest sub array of sum k*/
/*q2 largest substring with k unique elements*/
/*q3 longest substring without repeaating character*/
/*USING ANOTHER APROACH*/

void largesubarray();
void largesubarray2(/*USING ANOTHER APROACH*/);
void largesubstring();
void largewoutrepeat();


int main(){
    //largesubarray();
    //largesubarray2();
   //largesubstring();
     largewoutrepeat();
}

/*void largesubarray(){
     int a[7] = {4, 1, 1, 1, 2, 3, 5};
     int i = 0;
     int j = 0;
     int k = 5;
     int mx =  INT_MIN;

     int sum = 0;

     while(j<7){
        sum = sum + a[j];
        if(sum<k){
            j++;
        }
        else if(sum==k){
            int t = j-i+1;
            mx = max(mx, t);
            j++;
        }
        else if(sum>k){
            sum = sum - a[i];
            i++;
            j++;
        }

     }

     cout<<"your maximum value is"<<" "<<mx<<endl;

}*/

/*void largesubarray2(){
     int i = 0;
     int j = 0;

}*/
/*void largesubstring(){
   string s = "aabacbebebe";
    int k = 3;
    int t = s.length();
    int i = 0;
    int j = 0;
    int mx = INT_MIN;
    int count  = 0;
    map<char, int> mp;
    while(j<t){
        //mp.push_back(s[j]);

       // cout<<"your size of sets"<<mp.size()<<endl;
       mp[s[j]]++;

       if(mp.size()<k){
         j++;
       }
       else if(mp.size()==k){
        int r = j-i+1;

        cout<<"your value of r is"<<r<<endl;
        cout<<"your value of mx is"<<mx<<endl;
        mx = max(mx, r);
        j++;
       }
       else if(mp.size()>k){
         while(mp.size()>k){
              mp[s[i]]--;
              if(mp[s[i]]==0){
                mp.erase(s[i]);
              }
              i++;
              cout<<" you i value"<<i<<" "<<mp.size()<<endl;
            }
             cout<<"your size of sets  1 value"<<mp.size()<<endl;
             j++;
         }
       }

       cout<<mx<<endl;
       
      
 }*/

 void largewoutrepeat(){
     string s  = "pwwkew";
     int i = 0;
     int j = 0;
     int mx  = INT_MIN;
     map<char, int> mp;
     int t = s.length();
     while(j<t){
        mp[s[j]]++;
        int  k = j-i+1;
        if(mp.size()<k){
           while(mp.size()<j-i+1){
              mp[s[i]]--;
              if(mp[s[i]]==0){
                mp.erase(s[i]);
              }
              i++;
           }
           j++;
        }

        else if(mp.size()==j-i+1){
         mx = max(mx, j-i+1);
         j++;
        }



     }

 cout<<mx<<endl;

 }
    
   
