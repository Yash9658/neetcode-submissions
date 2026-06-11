class Solution {
public:
    double myPow(double x, int n) {

        // Approach 3: Fast Power (Binary Exponentiation) - Recursive
        // O(log n) - Optimal solution
        
        
        // Time Complexity: O(log n)
        // Space Complexity: O(log n) for recursion stack
        // Logic: xⁿ = (xⁿ⁄²)² when n is even; xⁿ = (xⁿ⁄²)² × x when n is odd
        
        long long N = n;
        if (N < 0) {
            x = 1 / x;
            N = -N;
        }
        return fastPow(x, N);
    }
    
private:
    double fastPow(double x, long long n) {
        if (n == 0) return 1.0;
        
        double half = fastPow(x, n / 2);
        
        if (n % 2 == 0) {
            return half * half;
        } else {
            return half * half * x;
        }
    }
};