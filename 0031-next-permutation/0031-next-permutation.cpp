class Solution {
public:
    void nextPermutation(vector<int>& A) {
        int n = A.size();
        int pvt = -1;
        for(int i =n-2;i>=0;i--){
            if(A[i]<A[i+1]){
                pvt = i;
                break;
            }
        }
            if(pvt==-1){
                reverse(A.begin(),A.end());
                return;
            }
           for(int i =n-1;i>pvt;i--){
            if(A[i]>A[pvt]){
                swap(A[i],A[pvt]);
                break;
            }
           }
            int i = pvt+1;
            int j = n-1;
            while(i<=j){
                swap(A[i],A[j]);
                i++;
                j--;
            }
        
    }
};