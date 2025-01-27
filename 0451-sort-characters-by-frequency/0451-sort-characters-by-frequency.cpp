class Solution {
public:
    string frequencySort(string s) {
        map<char, int> freqMap;
        
        // Count frequency of each character
        for (auto ch : s) {
            freqMap[ch]++;
        }
        
        // Create a vector to store characters and their frequencies
        vector<pair<int, char>> freqVec;
        
        for (auto& entry : freqMap) {
            freqVec.push_back({entry.second, entry.first});
        }
        
        // Sort the vector in descending order of frequency
        sort(freqVec.rbegin(), freqVec.rend());
        
        // Build the result string
        string result = "";
        for (auto& entry : freqVec) {
            result += string(entry.first, entry.second);  // Repeat character by frequency
        }
        
        return result;
    }
};