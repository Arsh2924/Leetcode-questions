class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        // Determine the sign of the result
        bool negative = (dividend < 0) ^ (divisor < 0);

        // Convert both to long long to handle abs(INT_MIN)
        long long dvd = labs(dividend);
        long long dvs = labs(divisor);
        long long quotient = 0;

        while (dvd >= dvs) {
            long long temp = dvs;
            long long multiple = 1;

            while (dvd >= (temp << 1)) {
                temp <<= 1;       
                multiple <<= 1;   
            }

            dvd -= temp;         
            quotient += multiple; 
        }

        if (negative)
            quotient = -quotient;

        if (quotient > INT_MAX) return INT_MAX;
        if (quotient < INT_MIN) return INT_MIN;

        return (int)quotient;
    }
};