class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        while (x != 0) {
            int ld = x % 10; // Extract last digit
            x /= 10;         // Remove the last digit

            // Check for overflow before updating rev
            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 ) return 0;
            if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && ld < -8)) return 0;

            rev = rev * 10 + ld; // Append the digit to rev
        }
        return rev;
    }
};
