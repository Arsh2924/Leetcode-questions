class Solution {
private:
    // Function to get the minimum non-zero frequency
    int getmincount(int freq[]) {
        int mincount = INT_MAX;
        for (int i = 0; i < 26; i++) {
            if (freq[i] != 0) {
                mincount = min(mincount, freq[i]);
            }
        }
        return mincount;
    }

    // Function to get the maximum frequency
    int getmaxcount(int freq[]) {
        int maxcount = 0;
        for (int i = 0; i < 26; i++) {
            maxcount = max(maxcount, freq[i]);
        }
        return maxcount;
    }

public:
    int beautySum(string s) {
        int sum = 0;
        for (int i = 0; i < s.length(); i++) {
            int freq[26] = {0}; // Initialize frequency array for each substring
            for (int j = i; j < s.length(); j++) {
                freq[s[j] - 'a']++; // Increment frequency of the current character
                int beauty = getmaxcount(freq) - getmincount(freq);
                sum += beauty;
            }
        }
        return sum;
    }
};