class Solution {
    
public:
bool check(vector<int> &vowels){
    for(auto it:vowels){
        if(it==0){
            return false;
        }
    }
    return true;
}
    int countVowelSubstrings(string word) {
        int count = 0;
        for(int i =0;i<word.length();i++){
            vector<int> vowels(5,0);
            for(int j=i;j<word.length();j++){
                if(word[j]=='a'){
                    vowels[0]++;
                }
                else if(word[j]=='e'){
                    vowels[1]++;
                }
                else if(word[j]=='i'){
                    vowels[2]++;

                }
                else if(word[j]=='o'){
                    vowels[3]++;
                }
                else if(word[j]=='u'){
                    vowels[4]++;
                }
                else {
                    break;
                }
                if(check(vowels)){
                count++;
            }
            }
            
        }
        return count;
    }
};