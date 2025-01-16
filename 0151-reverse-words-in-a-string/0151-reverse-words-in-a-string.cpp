class Solution {
private:
    // Function to reverse a substring of the string
    void reverse(string &st, int start, int end) {
        while (start < end) {
            swap(st[start], st[end]);
            start++;
            end--;
        }
    }

    // Function to trim extra spaces from the string
    string trimspaces(const string &s) {
        int n = s.length();
        int start = 0, end = n - 1;

        // Remove leading spaces
        while (start < n && s[start] == ' ') start++;
       
        while (end >= 0 && s[end] == ' ') end--;

        string result;
        for (int i = start; i <= end; i++) {
            if (s[i] != ' ' || (result.size() > 0 && result.back() != ' ')) {
                result.push_back(s[i]);
            }
        }

        return result;
    }

public:
    string reverseWords(string s) {
        // Step 1: Trim extra spaces
        s = trimspaces(s);

        // Step 2: Reverse the entire string
        int n = s.length();
        reverse(s, 0, n - 1);

        // Step 3: Reverse each word in the string
        int start = 0;
        for (int i = 0; i <= n; i++) {
            // When a space or end of string is found, reverse the word
            if (i == n || s[i] == ' ') {
                reverse(s, start, i - 1);
                start = i + 1; // Move start to the next word
            }
        }

        return s;
    }
};
