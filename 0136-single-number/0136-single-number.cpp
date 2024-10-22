class Solution {
public:
    int singleNumber(vector<int>& nums) {
    map<long long,int> ans;
    for(int i=0;i<nums.size();i++){
       ans[nums[i]]++;     
     }
     for(auto i : ans){
        if(i.second==1){
            return i.first;
        }
     }
     return -1;
    }
};