class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i =0;
        int j = 0;
        int n = (nums1.size() + nums2.size());
        vector<int>arr3;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]<nums2[j]){
                arr3.push_back(nums1[i]);
                i++;
            }
            else{
                arr3.push_back(nums2[j]);
                j++;
            }
        }
        while(i<nums1.size()){
            arr3.push_back(nums1[i]);
            i++;

        }
        while(j<nums2.size()){
            arr3.push_back(nums2[j]);
            j++;
        }
        if(n%2==1){
            return arr3[n/2];
        }else{
            return (double)((double)(arr3[n/2])+(double)(arr3[n/2-1]))/2;
        }
    }
};