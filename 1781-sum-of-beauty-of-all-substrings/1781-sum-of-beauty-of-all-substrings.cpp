class Solution {
private:
int getmincount(int freq[]){
    int mini = INT_MAX;
    for(int i =0;i<26;i++){
        if(freq[i]!=0){
            mini = min(mini,freq[i]);
        }
    }
    return mini;
}
   
   int getmaxcount(int freq[]){
    int maxi = 0;
    for(int i=0;i<26;i++){
        maxi = max(maxi,freq[i]);
    }
    return maxi;
   }
public:
    int beautySum(string s) {
       int sum = 0;
       for(int i=0;i<s.length();i++){
        int freq[26] = {0};
        for(int j=i;j<s.length();j++){
            freq[s[j]-'a']++;
            int beauty = getmaxcount(freq) - getmincount(freq);
            sum+=beauty;
        }
       }
       return sum;
    }
};