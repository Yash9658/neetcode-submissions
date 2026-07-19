class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if (n == 0) return 0;
        
        int notHold = 0;
        int hold = -prices[0];
        
        for (int i = 1; i < n; i++) {
            // New notHold: max(previous notHold, sell today)
            int newNotHold = max(notHold, hold + prices[i]);
            // New hold: max(previous hold, buy today)
            int newHold = max(hold, -prices[i]);
            
            notHold = newNotHold;
            hold = newHold;
        }
        
        return notHold;
    }
};