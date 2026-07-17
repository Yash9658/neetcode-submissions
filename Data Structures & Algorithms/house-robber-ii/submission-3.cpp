class Solution {
public:
    int solve(vector<int>& nums, int index, int end, vector<int>& dp) {

        if (index > end)
            return 0;

        if (dp[index] != -1)
            return dp[index];

        int pick = nums[index] + solve(nums, index + 2, end, dp);
        int notPick = solve(nums, index + 1, end, dp);

        return dp[index] = max(pick, notPick);
    }

    int rob(vector<int>& nums) {

        int n = nums.size();

        if (n == 1)
            return nums[0];

        vector<int> dp1(n, -1);
        vector<int> dp2(n, -1);

        int case1 = solve(nums, 0, n - 2, dp1);
        int case2 = solve(nums, 1, n - 1, dp2);

        return max(case1, case2);
    }
};