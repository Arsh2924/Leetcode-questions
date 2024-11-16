class Solution {
public:
    bool isPalindrome(int x) {
        // Negative numbers are not palindromes
        if (x < 0) {
            return false;
        }
        
        int revNum = 0;
        int dup = x; // Store original number

        while (x != 0) {
            int ld = x % 10; // Extract the last digit

            // Check for overflow before updating revNum
            if (revNum > INT_MAX / 10 || (revNum == INT_MAX / 10 && ld > 7)) {
                return false; // Overflow occurred, cannot be a palindrome
            }

            revNum = (revNum * 10) + ld; // Build the reversed number
            x = x / 10; // Remove the last digit
        }

        return dup == revNum; // Check if the original number matches its reverse
    }
};
