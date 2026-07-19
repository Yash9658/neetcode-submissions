class Solution {
public:
    int func(int m,int n,int i,int j,vector<vector<int>>& dp){
        if(i==m-1 && j==n-1) return 1;
        if(dp[i][j]!=-1) return dp[i][j];
        if(i<0 || j<0 || j>=n || i>=m) return 0;
        return dp[i][j]= func(m,n,i+1,j,dp) + func(m,n,i,j+1,dp);
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
        return func(m,n,0,0,dp);
    }
};
