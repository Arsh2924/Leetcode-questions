class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        
        // Initialize a hash vector of size n+1, filled with 0s
        vector<int> hash(n + 1, 0);
        
        // Mark presence of each number in nums by setting hash[nums[i]] to 1
        for (int i = 0; i < n; i++) {
            hash[nums[i]] = 1;
        }
        
        // Find the missing number by checking for a 0 in the hash array
        for (int i = 0; i <= n; i++) {
            if (hash[i] == 0) {
                return i; // Missing number
            }
        }
        
        return -1; // Safeguard, should not reach here
    }
};

