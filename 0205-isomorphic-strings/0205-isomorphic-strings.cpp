class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char> st; // also use array int sss[128] = {-1}
        map<char,char> tt;// " same above "  by using it code beats more
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