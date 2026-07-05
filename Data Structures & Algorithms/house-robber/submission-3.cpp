class Solution {
public:
    int ans(vector<int> &dp,vector<int>& nums,int index,int n){
     if(index>=n) return 0;
     if(dp[index]!=-1) return dp[index];
     int yes=nums[index]+ans(dp,nums,index+2,n);
     int no=ans(dp,nums,index+1,n);
     return dp[index]=max(yes,no);
    }
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size()+1,-1);
        return ans(dp,nums,0,nums.size());
    }
};
