class Solution {
public:
    double myPow(double x, int n) {
        // Approach 7: Using std::pow (Library Function)
        // Time Complexity: O(log n) (implementation dependent)
        // Space Complexity: O(1)
        
        return pow(x, n);  // Built-in function
    }
};