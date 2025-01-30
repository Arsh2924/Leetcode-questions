class Solution {
public:
    int maxDepth(string s) {
        
        int count = 0;
        int maxii = 0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                count++;
                if(count>maxii){
                    maxii++;
                }
            }
            else if(s[i]==')'){
                count--;
            }
        }
        return maxii ;
    }
};