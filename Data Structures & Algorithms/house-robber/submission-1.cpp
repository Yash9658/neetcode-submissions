class Solution {
public:
    int func(vector<int> nums,vector<int>& dp,int n,int index){
        if(index>=n)    return 0;
        if(dp[index]!=-1) return dp[index];
        int c1=nums[index]+func(nums,dp,n,index+2);
        int c2=func(nums,dp,n,index+1);
        dp[index]=max(c1,c2);
        return dp[index];
    }
    int rob(vector<int>& nums) {
      int n=nums.size();
      vector<int> dp(n+1,-1);
        return func(nums,dp,n,0);
    }
};
