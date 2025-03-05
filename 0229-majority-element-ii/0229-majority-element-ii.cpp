class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> hash;
        int nn = nums.size();
        for(int i=0;i<nums.size();i++){
            int n = nums[i];
            hash[n]++;
        }
        vector<int> ans;
    
        // int maxi = INT_MIN;
        // for(auto num : hash){
        //     if(num.second>=maxi){
        //         maxi = num.second;
                
        //     }
        // }
        for(auto num :hash){
            if(num.second>n/3){
                ans.push_back(num.first);
            }
        }
       
        return ans;;
    }
};