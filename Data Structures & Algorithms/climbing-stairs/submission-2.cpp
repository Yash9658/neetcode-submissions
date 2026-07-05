class Solution {
public:
int ans(int n,int i,vector<int> &dp){
    if( i==n )return 1;
    if(i>n) return 0;
    if(dp[i]!=-1) return dp[i];

    return dp[i]=ans(n,i+1,dp)+ans(n,i+2,dp);
    
}
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        return ans(n,0,dp);
    }
};
