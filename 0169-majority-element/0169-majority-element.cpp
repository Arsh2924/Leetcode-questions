class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> ans;
        int n = nums.size();
        for(int i=0;i<nums.size();i++){
            ans[nums[i]]++;
        }
        for(auto it: ans){
            if(it.second>n/2){
                return it.first;
            }
        }
        return -1;
    }
};