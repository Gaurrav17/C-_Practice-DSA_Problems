//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

void solve(stack<int>, int);

// } Driver Code Ends
//User function template for C++

class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        if(s.size()==0){
         return;
        }
        int k = s.size();
        int r = k/2 + 1;
        cout<<"value  of r firstr "<<r<<endl;
        cout<<"function has been called "<<endl;
        solve(s, r);
    }

    void solve(stack<int> &s, int r){
        cout<<"inside function "<<endl;
           if(r==1){
            s.pop();
            return;
           }
           int top = s.top();
           cout<<"value of top is "<<top<<endl;
           cout<<"value of r before "<<r<<endl;
           s.pop();                             
           solve(s, r-1);
           cout<<"value of r AFTER "<<r<<endl;
           s.push(top);
           return;

    }
};

//{ Driver Code Starts.
int main() {
 
        int sizeOfStack;
    
        cout<<"enter stack of size "<<endl;
         cin>>sizeOfStack;
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    return 0;
}

// } Driver Code Ends