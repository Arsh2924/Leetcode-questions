class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hash;
        for(int i = 0;i<nums.size();i++){
          
            int sum = nums[i];
            int k = target-sum;
            if(hash.find(k)!=hash.end()){
            return{hash[k],i};
            
                
            }
            hash[sum]=i;
        }
        return {};
    }
};