#include <bits/stdc++.h>
using namespace std;
int main(){
	int num;
	cin >> num;
	vector<int> z;
	vector<int> v;      
	while(num--){
		int n, m;
		cin>>n>>m;
		int k = n + m;
		for(int i = 0; i<k; i++){
          int x;
		  //z.push_back(x); 
          cin>>x;
		  if(i<n){
		  v.push_back(x);
		
		}
        cout<<"youyr  z elements, rohnwf"<<endl;
        for(int i =0; i<z.size(); i++){
            cout<<z[i]<<endl;
        }
          cout<<"youyr  v elements,rohnwf"<<endl;
        for(int i =0; i<z.size(); i++){
            cout<<v[i]<<endl;
        }
		
		for(int  j = 0; j<z.size(); j++){
			for(int i = 0; i<v.size(); i++){
				if(z[i]==v[i]){
					cout<<"YES"<<endl;
					break;
				}
				else{
				    cout<<"NO"<<endl;
					break;	
				}
				
			}
			
		}
	}
}