class Solution {
public:
    double myPow(double x, int n) {

        // Approach 4: Fast Power (Binary Exponentiation) - Iterative (OPTIMAL)
        // Time Complexity: O(log n)
        // Space Complexity: O(1)
        

        // How it works (Binary Method):
        // Example: x¹³ = x¹¹⁰¹ (binary)
        // x¹³ = x⁸ × x⁴ × x¹
        // We process bits from LSB to MSB

        long long N = n;
        if (N < 0) {
            x = 1 / x;
            N = -N;
        }
        
        double result = 1.0;
        double currentProduct = x;
        
        while (N > 0) {
            if (N % 2 == 1) {  // If current bit is 1
                result *= currentProduct;
            }
            currentProduct *= currentProduct;  // Square the base
            N /= 2;  // Move to next bit
        }
        
        return result;
    }
};