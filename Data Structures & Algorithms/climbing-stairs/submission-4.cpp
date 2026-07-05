class Solution {
public:
    int climbStairs(int n) {
        if(n<=2)    return n;
        
        int prev = 1;
        int curr=2;
        int next=0;
        for(int i=3;i<=n;i++){
            next = prev + curr;  // dp[i] = dp[i-1] + dp[i-2]
            prev = curr;            // Shift for next iteration
            curr= next;
        }
        return curr;
    }
};
