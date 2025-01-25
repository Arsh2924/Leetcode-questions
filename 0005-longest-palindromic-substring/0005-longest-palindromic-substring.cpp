#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        string reversed_s = string(s.rbegin(), s.rend());
        int n = s.size();
        
        // DP table to store the lengths of the longest common substrings
        vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));
        int maxLength = 0; // Length of the longest palindrome substring
        int endIndex = 0;  // End index of the longest palindrome substring in the original string

        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                if (s[i - 1] == reversed_s[j - 1]) {
                    dp[i][j] = dp[i - 1][j - 1] + 1;

                    // Check if the indices align correctly for a valid palindrome
                    int startOriginal = i - dp[i][j];
                    int startReversed = n - j;
                    if (startOriginal == startReversed) { // Ensure the palindrome condition
                        if (dp[i][j] > maxLength) {
                            maxLength = dp[i][j];
                            endIndex = i;
                        }
                    }
                }
            }
        }

        // Extract the longest palindrome substring
        return s.substr(endIndex - maxLength, maxLength);
    }
};