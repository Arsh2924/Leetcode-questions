class Solution {
public:
    string convert(string s, int numRows) {
        // Edge case: if there's only one row or the string is too short
        if (numRows == 1 || numRows >= s.length()) {
            return s;
        }

        // Create a vector to store strings for each row
        vector<string> rows(numRows);
        int currentRow = 0;
        bool goingDown = false;

        // Traverse each character in the string
        for (char c : s) {
            rows[currentRow] += c;

            // Change direction when top or bottom row is reached
            if (currentRow == 0 || currentRow == numRows - 1) {
                goingDown = !goingDown;
            }

            // Move up or down
            currentRow += goingDown ? 1 : -1;
        }

        // Concatenate all rows into one result string
        string result;
        for (const string& row : rows) {
            result += row;
        }

        return result;
    }
};
