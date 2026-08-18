class Solution {
public:
    int func(vector<vector<int>> &dp,vector<int>& coins, int amount,int index,int n){
        if(amount==0) return 0;
        if(amount<0 || index>=n ) return INT_MAX;
        if(dp[index][amount]!=-1)  return dp[index][amount];
        int take = func(dp,coins,amount-coins[index],index,n);
        int tres = take==INT_MAX ? INT_MAX : take+1;

        int ntake = func(dp,coins,amount,index+1,n);
        return dp[index][amount] = min(ntake,tres);
    }
    int coinChange(vector<int>& coins, int amount) {
        if(amount == 0) return 0;
        int n=coins.size();
        vector<vector<int>> dp(n,vector<int> (amount+1,-1));
        int res = func(dp, coins, amount, 0, n);
        return (res == INT_MAX) ? -1 : res;
    }
};


        
    
  
  
  
  
  