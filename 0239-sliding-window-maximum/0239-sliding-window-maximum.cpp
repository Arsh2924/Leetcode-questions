class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
     deque<int> dq; // stores indices of useful elements
        vector<int> ans;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            // 1️⃣ Remove indices out of current window
            if (!dq.empty() && dq.front() == i - k)
                dq.pop_front();

            // 2️⃣ Remove smaller elements from back (they’re useless)
            while (!dq.empty() && nums[dq.back()] < nums[i])
                dq.pop_back();

            // 3️⃣ Push current index
            dq.push_back(i);

            // 4️⃣ Start adding results once we have first full window
            if (i >= k - 1)
                ans.push_back(nums[dq.front()]);
        }

        return ans;
    }
};