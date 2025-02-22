class Solution {
public:
    bool rotateString(string s, string goal) {
        string whole = s+s;
        if(s.length()!=goal.length()){
                return false;
        }
        if(whole.indexOf(goal)==-1){
            return false;
        }
        else{
            return true;
        }
    }
};