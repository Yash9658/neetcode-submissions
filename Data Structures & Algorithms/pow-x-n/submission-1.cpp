class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0) return 1.0;
        
        long long N = n;
        if (N < 0) {
            x = 1 / x;
            N = -N;
        }
        
        return powHelper(x, N);
    }
    
private:
    double powHelper(double x, long long n) {
        if (n == 0) return 1.0;
        return x * powHelper(x, n - 1);
    }
};