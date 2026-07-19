class Solution {
public:
    int func(vector<int> prices,int index,int k,vector<vector<int>>&dp){
        if(index==prices.size()) return 0;
        if(k==0) return 0;
        if(dp[index][k]!=-1) return dp[index][k];
        if (k==2){
            int skip=func(prices,index+1,k,dp);
            int buy=func(prices,index+1,k-1,dp)-prices[index];
            return dp[index][k]=max(buy,skip);
        }
        else {
            int skip=func(prices,index+1,k,dp);
            int sell=func(prices,index+1,k-1,dp)+prices[index];
            return dp[index][k]=max(sell,skip);
        }
    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>> dp(n,vector<int>(3,-1));
        return func(prices,0,2,dp);
    }
};
