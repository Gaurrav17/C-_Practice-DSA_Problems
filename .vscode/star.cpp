#include<iostream> 
using namespace std;
int main(){
    int n,k;
    cin>>n;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }for(int j=1,k=2*i-1;j<=2*i-1;j++,k--){
            if(j<=k){
                cout<<j;
            }
            else{
                cout<<k;
            }
        }
        cout<<endl;
      
    }
    return 0;
}