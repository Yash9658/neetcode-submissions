class Solution {
public:
    int func(vector<int>& nums, int i, vector<int>& dp) {
        if(i == 0)
            return nums[0];

        if(dp[i] != INT_MIN)
            return dp[i];

        return dp[i] = max(nums[i], nums[i] + func(nums, i - 1, dp));
    }

    int maxSubArray(vector<int>& nums) {
        int n = nums.size();

        vector<int> dp(n, INT_MIN);

        int ans = INT_MIN;

        for(int i = 0; i < n; i++) {
            ans = max(ans, func(nums, i, dp));
        }

        return ans;
    }
};