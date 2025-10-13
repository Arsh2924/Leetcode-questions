class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxwater = 0;
        int i=0;
        int j =height.size()-1;
        while(i<j){
            int high = min(height[i],height[j]);
            int wiegt = j-i;
            int area = high*wiegt;
            maxwater = max(maxwater,area);
            height[i]<height[j]?i++:j--;
            
        }
        return maxwater;
    }
};