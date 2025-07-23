class Solution {
    
int findFirst(const vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1, ans = -1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (nums[mid] == target) {
            ans = mid;
            right = mid - 1; // keep searching left
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return ans;
}

int findLast(const vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1, ans = -1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (nums[mid] == target) {
            ans = mid;
            left = mid + 1; // keep searching right
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return ans;
}
public:
    vector<int> searchRange(vector<int>& nums, int target) {
         int first = findFirst(nums, target);
    int last = findLast(nums, target);
    return {first, last};
    }
};