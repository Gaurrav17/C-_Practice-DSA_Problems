//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    static int z;
    vector<int> findTwoElement(vector<int> arr, int n) {
       unordered_map<int, int> mp;
       vector<int> v;
       for(int i = 0; i<n ; i++){
          mp[arr[i]]++;
       }
      
       int flag = 0;
       int temp = 0;  
     
       int j = 1;
       while(flag!=1||j<=n){
         j++;  
          if(mp.find(j)==mp.end()){
               v.push_back(j);
               flag = 1;
               cout<<"inside 1 "<<endl;
               j++; 
           } 
              cout<<"Something 1 "<<endl;
              cout<<"value of j "<<j<<endl;
           j++;  
       }
      int k = 0;
                
       while(temp!=1||k<=n){
       
          if(mp[k]>1){
           v.push_back(arr[k]);
            temp = 1;
            cout<<"inside 2 "<<endl;
            k++; 
           }
            k++; 
           cout<<"Something 1"<<endl; 
           cout<<"value of k "<<k<<endl;
       }
       return v;
    }
};

//{ Driver Code Starts.

int Solution::z = 5;

int main() { 
    
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int a = Solution::z;
        cout<<"THe value of a is "<<a<<endl;
        Solution ob;
   
   
    return 0;
}
// } Driver Code Ends