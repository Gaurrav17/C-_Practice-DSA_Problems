#include <iostream>
using namespace std;

int main(){
	int a, i ;
	
	cin>>a;
	//if(a%a==0&&a%1==0){//||b%b==0&&b%1==0||c%c==0&&c%1==0||d%d==0&&d%1==0){

	for(i=1; i<a; i++){
       // while(i<(a||b||c||d)){
	if(i+(i+1)==a){
	    cout<<i<<" "<<i+1<<endl;
    }
        else if(i+i==a){

        cout<<i<<" "<<i<<endl;   
        }  
 else if(a<=1){
        cout<<"-1"<<" "<<"-1"<<endl;
        
        
       // i+1;
    }  
	} 
    if(a<=1){
        cout<<"-1"<<" "<<"-1"<<endl;

    }
	//}
	return 0;
}
