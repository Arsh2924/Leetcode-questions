// class Solution {
// public:

// bool isalnum(char ch){
//     if((ch>='a' && ch<='z') ||  (ch>=0 && ch<=9) || (ch>='A' && ch<='Z')){
//         return true;
//     }else{
//         return false;
//     }
// }

// int tolower(char ch){
//     if((ch>='a' && ch<='z') || (ch>=0 && ch<=9)){
//         return ch;
//     }
//     else{
//         char temp  = ch-'A'+'a';
//         return temp;
//     }
// }
// bool isPalindrome(string &s) {
//     int start = 0;
//     int end = s.length() - 1;

//     while (start < end) {
//         // Skip non-alphanumeric characters from the start
//         while (start < end && !isalnum(s[start])) {
//             start++;
//         }
        
//         // Skip non-alphanumeric characters from the end
//         while (start < end && !isalnum(s[end])) {
//             end--;
//         }
        
//         // Compare the characters (case-insensitive)
//         if (tolower(s[start]) != tolower(s[end])) {
//             return false;
//         }
//         start++;
//         end--;
//     }
    
//     return true;
// }


// };

#include <string>

class Solution {
    private:
      bool isAlnum(char ch) {
        // Check if the character is alphanumeric
        if((ch >= 'a' && ch <= 'z') || 
               (ch >= 'A' && ch <= 'Z') || 
               (ch >= '0' && ch <= '9')){
        return true;
    }
    return false;
      }
    char toLower(char ch) {
        // Convert uppercase letters to lowercase
        if (ch >= 'A' && ch <= 'Z') {
            char temp =  ch - 'A' + 'a';
            return temp;
        }
        return ch;  // Non-uppercase letters are returned unchanged
    }
    bool checkpalidrome(string s) {
    int start = 0;
    int end = s.length() - 1;

    while (start < end) {
        // Skip non-alphanumeric characters from the start
        while (start < end && !isalnum(s[start])) {
            start++;
        }
        
        // Skip non-alphanumeric characters from the end
        while (start < end && !isalnum(s[end])) {
            end--;
        }
        
        // Compare the characters (case-insensitive)
        if (s[start]!= s[end]) {
            return false;
        }
        start++;
        end--;
    }
    
    return true;
}
public:
    bool isPalindrome(const std::string& s) {
        
  string temp = "";
  for(int j =0;j<s.length();j++){
     if(isAlnum(s[j])){
        temp.push_back(s[j]);
     }
  }
  for(int j=0;j<temp.length();j++){
    temp[j] = toLower(temp[j]);
  }
return checkpalidrome(temp);
    }
    
};
