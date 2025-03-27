class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> generate(numRows); // Create outer vector
        
        for (int i = 0; i < numRows; i++) {
            generate[i].resize(i + 1); // Resize inner vector
            
            generate[i][0] = generate[i][i] = 1; // First and last element of row = 1
            
            for (int j = 1; j < i; j++) { // Loop only for valid middle elements
                generate[i][j] = generate[i-1][j-1] + generate[i-1][j];
            }
        }
        return generate;
    }
};
