class Solution {
    private:
    bool linearsearch(vector<int> nums , int a){
        for(int i =0;i<nums.size();i++){
            if(nums[i]==a){
                return true;
            }
        }
        return false;
    }
public:
    int longestConsecutive(vector<int>& nums) {
        
       int n = nums.size();
       if(n==0){
        return 0;
       }
       int lon = 1;
       for(int i=0;i<nums.size();i++){
        int a = nums[i];
        int cnt = 1;
        while(linearsearch(nums ,a+1)==true){
            a+=1;
            cnt++;
        }
        lon = max(lon,cnt);
       }
       return lon;
    }
};