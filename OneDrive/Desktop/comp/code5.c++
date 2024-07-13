
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int min(int[]);
class Solution{
    public:
        vector<int> RopeCutting(int arr[], int n)
    {      stack<int> v;
          sort(arr, arr+n);
           for(int i = 0; i<n; i++){
            
           }  

           for(int i = 0; i<n; i++){
            
           }



    }


};


int main()
{   
   
       	int n;
       	cin>>n;
       	int arr[n+1];
       	for(int i=0;i<n;i++)
       	   cin>>arr[i];
        
        vector<int> v;
        Solution ob;
        v = ob.RopeCutting(arr, n);
        for(int i : v){
            cout << i << " ";
        }
        cout << endl;
        
        
    
  return 0;
}
// } Driver Code Ends