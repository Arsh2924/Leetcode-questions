#include <vector>
#include <algorithm>

class Solution {
public:
    int maxFrequency(std::vector<int>& nums, int k) {
        std::sort(nums.begin(), nums.end()); // Step 1: Sort the array
        int left = 0, maxFreq = 0; 
        long long sum = 0; // To track the sum of the current window

        for (int right = 0; right < nums.size(); ++right) {
            sum += nums[right]; // Expand the window by adding the new element
            
            // Check if the window is valid
            while ((long long)nums[right] * (right - left + 1) > sum + k) { // Cast to long long here
                sum -= nums[left]; // Shrink the window
                ++left;
            }
            
            // Update the maximum frequency
            maxFreq = std::max(maxFreq, right - left + 1);
        }
        
        return maxFreq;
    }
};
