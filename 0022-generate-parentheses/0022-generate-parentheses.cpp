class Solution {
    void solve(int n, int open, int close, string curr, vector<string> &ans) {
    // If the current string is complete
    if (curr.length() == 2 * n) {
        ans.push_back(curr);
        return;
    }

    // Add '(' if possible
    if (open < n) {
        solve(n, open + 1, close, curr + "(", ans);
    }

    // Add ')' if it keeps the string valid
    if (close < open) {
        solve(n, open, close + 1, curr + ")", ans);
    }
}
public:
    vector<string> generateParenthesis(int n) {
          vector<string> ans;
    solve(n, 0, 0, "", ans);
    return ans;
    }
};