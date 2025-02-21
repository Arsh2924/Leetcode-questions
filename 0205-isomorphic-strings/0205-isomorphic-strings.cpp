class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char> st;
        map<char,char> tt;
        if(s.length()!=t.length()){
            return false;
        }
        for(int i =0;i<s.length();i++){
            char stp = s[i];
            char  ttp = t[i];
                if(!st[stp]){
                    st[stp]=ttp;
                }
                if(!tt[ttp]){
                    tt[ttp]=stp;
                }
                if(st[stp]!=ttp || tt[ttp]!=stp){
                    return false;
                }

        }
        return true;

    }
};