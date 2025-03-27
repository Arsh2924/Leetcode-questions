class Solution {
public:
    vector<vector<int>> generate(int numRows) {
         vector<vector<int>>  generate(numRows);
   for(int i=0;i<numRows;i++){
    generate[i].resize(i + 1);
    generate[i][0] = generate[i][i] = 1;
    for(int j=0;j<i;j++){
   
   
         generate[i][j]= generate[i-1][j]+ generate[i-1][j-1];
    
    }
   }
   return  generate;
    }
};