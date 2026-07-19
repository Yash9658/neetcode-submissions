class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if (n == 0) return 0;
        
        // dp[i][0] = max profit on day i without stock
        // dp[i][1] = max profit on day i holding stock
        vector<vector<int>> dp(n, vector<int>(2, 0));
        
        // Base case: day 0
        dp[0][0] = 0;              // No stock, no profit
        dp[0][1] = -prices[0];     // Buy stock on day 0
        
        for (int i = 1; i < n; i++) {
            // Not holding stock: max(do nothing, sell today)
            dp[i][0] = max(dp[i-1][0], dp[i-1][1] + prices[i]);
            
            // Holding stock: max(do nothing, buy today)
            dp[i][1] = max(dp[i-1][1], dp[i-1][0] - prices[i]);
        }
        
        return dp[n-1][0]; // Maximum profit without holding stock
    }
};