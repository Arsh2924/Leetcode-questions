class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        // Calculate the expected sum from 0 to n
        int expected_sum = (n * (n + 1)) / 2;
        // Calculate the actual sum of the elements in the array
        int actual_sum = 0;
        for (int num : nums) {
            actual_sum += num;
        }
        // The difference between the expected sum and the actual sum is the missing number
        return expected_sum - actual_sum;
    }
};
