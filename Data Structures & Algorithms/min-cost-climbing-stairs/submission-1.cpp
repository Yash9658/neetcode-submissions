class Solution {
public:
    int func(vector<int> cost,int index,int n,vector<int> &dp){
        if(index>=n) return 0;
        if(dp[index]!=-1) return dp[index];
        return dp[index] = cost[index] + min(func(cost,index+1,n,dp),func(cost,index+2,n,dp));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int> dp(n+1,-1);
        return min( func(cost,0,n,dp),func(cost,1,n,dp));
    }
};
