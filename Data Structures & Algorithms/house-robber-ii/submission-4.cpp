class Solution {
public:

    int solve(vector<int>& nums, int start, int end) {

        int len = end - start + 1;

        vector<int> dp(len);

        dp[0] = nums[start];

        for (int i = 1; i < len; i++) {

            int pick = nums[start + i];

            if (i > 1)
                pick += dp[i - 2];

            int notPick = dp[i - 1];

            dp[i] = max(pick, notPick);
        }

        return dp[len - 1];
    }

    int rob(vector<int>& nums) {

        int n = nums.size();

        if (n == 1)
            return nums[0];

        int case1 = solve(nums, 0, n - 2);

        int case2 = solve(nums, 1, n - 1);

        return max(case1, case2);
    }
};