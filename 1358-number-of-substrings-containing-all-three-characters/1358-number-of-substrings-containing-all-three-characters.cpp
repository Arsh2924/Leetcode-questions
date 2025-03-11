class Solution {
public:
    int numberOfSubstrings(string s) {
        int count = 0;
unordered_map<int, int> hash = {{0, -1}, {1, -1}, {2, -1}};
               
        for (int i = 0; i < s.length(); i++) {
                hash[s[i]-'a']=i;  
                
                if (hash['a']!=-1&& hash['b'] !=-1 && hash['c'] !=-1) {
                 count += 1 + min(hash[0], min(hash[1], hash[2]));
                }
            
        }
        return count;
    }
};