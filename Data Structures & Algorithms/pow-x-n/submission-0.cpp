class Solution {
public:
    double myPow(double x, int n) {

        // Time Complexity: O(n)
        // Space Complexity: O(1)
        // Issue: Too slow for large n (e.g., n = 2³¹ - 1)
    
        if (n == 0) return 1.0;
        
        long long N = n;  // Handle INT_MIN case
        if (N < 0) {
            x = 1 / x;
            N = -N;
        }
        
        double result = 1.0;
        for (long long i = 0; i < N; i++) {
            result *= x;
        }
        return result;
    }
};
