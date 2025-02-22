class Solution {
    public:
    bool matches(string word,string pattern){
        if(word.length()!=pattern.length()){
            return false;
        }
        map<char,char> st; // also use array int sss[128] = {-1}
        map<char,char> tt;
        for(int i =0;i<word.length();i++){
            char stp = word[i];
            char  ttp = pattern[i];
                if (st.count(stp) == 0) {
                st[stp] = ttp;
            }
            if (tt.count(ttp) == 0) {
                tt[ttp] = stp;
            }
                if(st[stp]!=ttp || tt[ttp]!=stp){
                    return false;
                }

        }
        return true;
    }
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
         vector<string> result;
        for (const string word : words) {
            if (matches(word, pattern)) {
                result.push_back(word);
            }
        }
        return result;
    }
};