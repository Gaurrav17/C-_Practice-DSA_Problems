#include <bits/stdc++.h>
using namespace std;


int pivotIndex(vector<int>& nums) {

         map<int, int> mp;

        int n = nums.size();

        for (int i = 0; i < n; i++) {
            mp[nums[i]]++;
        }

        cout<<"Your Size of Map is "<<mp.size()<<endl;

        for(int i = 0; i<mp.size(); i++){
            cout<<"Your Number is "<<nums[i]<<endl;
            cout<<mp[nums[i]]<<endl;
        }
    }


int main()
{

vector<int> nums = {2,0,2,1,1,0, 0};

cout<<pivotIndex(nums)<<endl;

}