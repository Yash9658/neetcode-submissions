class Solution {
public:
    int func(vector<int> nums,int index,int n,vector<int> &dp){
        if(index>n) return 0;
        if(dp[index]!=-1) return dp[index];
        int take = nums[index] + func(nums,index+2,n,dp);
        int ntake = func(nums,index+1,n,dp);
        return dp[index] = max(take,ntake);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n+1,-1);
        return max(func(nums,0,n-1,dp),func(nums,1,n-1,dp));    }
};
