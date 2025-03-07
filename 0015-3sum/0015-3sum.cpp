#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());  // Step 1: Sort array (O(N log N))
        
        int n = nums.size();
        for (int i = 0; i < n - 2; i++) {  // Step 2: Fix one number
            if (i > 0 && nums[i] == nums[i - 1]) continue;  // Skip duplicates

            int left = i + 1, right = n - 1;
            while (left < right) {  // Step 3: Two-pointer search
                int sum = nums[i] + nums[left] + nums[right];
                if (sum == 0) {
                    ans.push_back({nums[i], nums[left], nums[right]});
                    
                    // Move left pointer to skip duplicate values
                    while (left < right && nums[left] == nums[left + 1]) left++;
                    // Move right pointer to skip duplicate values
                    while (left < right && nums[right] == nums[right - 1]) right--;
                    
                    left++, right--;
                } 
                else if (sum < 0) {
                    left++;  // Increase sum
                } 
                else {
                    right--; // Decrease sum
                }
            }
        }
        return ans;
    }
};
