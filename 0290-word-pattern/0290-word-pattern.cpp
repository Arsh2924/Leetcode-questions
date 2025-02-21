// #include <string>
// #include <vector>
// #include <map>
// using namespace std;

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> v;
        int i = 0;
        string temp = "";

        while (i < s.size()) {
            if (s[i] == ' ') {
                v.push_back(temp);
                temp = "";
            } else {
                temp += s[i];
            }
            i++;
        }
        v.push_back(temp);

        if (v.size() != pattern.size()) {
            return false;
        }

        map<char, string> st;
        map<string, char> tt;

        if (pattern.size() != v.size()) {
            return false;
        }

        for (int i = 0; i < pattern.size(); i++) {  // Use pattern.size() instead of s.length()
            char stp = pattern[i];
            string ttp = v[i];

            if (st.count(stp) == 0) {
                st[stp] = ttp;
            }
            if (tt.count(ttp) == 0) {
                tt[ttp] = stp;
            }
            if (st[stp] != ttp || tt[ttp] != stp) {
                return false;
            }
        }
        return true;
    }
};
