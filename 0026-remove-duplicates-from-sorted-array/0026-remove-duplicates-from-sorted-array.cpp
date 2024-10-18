class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> ans;
        int i = 0;
        while(i<nums.size()){
            ans[i] = nums[i];
            int j=i+1;
            while(j<nums.size() && nums[i]==nums[j]){
                j++;
            }
            i=j;
            
        }
        int count = 1;
    for(int i=0;i<ans.size();i++){
        count++;
    }
    return count;
    }
};