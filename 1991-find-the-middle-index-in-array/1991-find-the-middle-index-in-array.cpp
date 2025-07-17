class Solution {
public:
    int findMiddleIndex(vector<int> &v){
        int total =0;
        for(int i =0;i<v.size();i++){
            total+=v[i];
        }
        int presum = 0;
        for(int i=0;i<v.size();i++){
            int suffixsum = total -presum-v[i];
            if(suffixsum == presum){
                return i ;
            }
            presum+=v[i];
        }
        return -1;
    }
  
};
