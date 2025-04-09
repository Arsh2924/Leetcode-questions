class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int l = 0;
        int r =0;
        int maxlen = 0;
        unordered_map<int,int> hash;
        while(r<fruits.size()){
            if(hash.size()>2){
                hash[fruits[l]]--;
              
                if(hash[fruits[l]]==0){
                    hash.erase(fruits[l]);
                }
                  l++;
            }
            if(hash.size()<=2){
                maxlen = max(maxlen,r-l+1);
            }
            r++;
        }
        return maxlen;
    }
};