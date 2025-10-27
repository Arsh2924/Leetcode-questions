class Solution {
public:
   

bool checkValidString(string s) {
    int leftBalance = 0; // Balance count for treating '*' as '('
    int rightBalance = 0; // Balance count for treating '*' as ')'
    
    // Left to Right pass
    for (char c : s) {
        if (c == '(' || c == '*') {
            leftBalance++;
        } else {
            leftBalance--;
        }
        // If balance is negative, there's a mismatch
        if (leftBalance < 0) {
            return false;
        }
    }
    
    // Right to Left pass
    for (int i = s.size() - 1; i >= 0; i--) {
        if (s[i] == ')' || s[i] == '*') {
            rightBalance++;
        } else {
            rightBalance--;
        }
        // If balance is negative, there's a mismatch
        if (rightBalance < 0) {
            return false;
        }
    }
    
    return true;
}
};