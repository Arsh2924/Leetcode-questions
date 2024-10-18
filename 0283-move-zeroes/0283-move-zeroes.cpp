class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int s = 0; // Index to track the next non-zero element's position
        int end = nums.size(); // End of the array
        
        // Traverse the array and shift non-zero elements to the front
        for (int i = 0; i < end; i++) {
            if (nums[i] != 0) {
                swap(nums[s], nums[i]); // Move non-zero element to the front
                s++;
            }
        }
    }
};
