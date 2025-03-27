class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> generate(numRows); // Initialize the outer vector
        
        for(int i = 0; i < numRows; i++) {
            generate[i].resize(i + 1); // Resize inner vector to hold i+1 elements
            generate[i][0] = generate[i][i] = 1; // First and last element of each row is 1
            
            for(int j = 1; j < i; j++) { // Compute inner elements
                generate[i][j] = generate[i-1][j-1] + generate[i-1][j];
            }
        }
        return generate;
    }
};
