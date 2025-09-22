class Solution {
public:
   
int search(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;

    while (left <= right) {  // must be <=
        int mid = left + (right - left) / 2; // safe from overflow

        if (nums[mid] == target) {
            return mid; // target found
        }
        else if (nums[mid] < target) {
            left = mid + 1; // search right half
        }
        else {
            right = mid - 1; // search left half
        }
    }

    return -1; // target not found
}
};