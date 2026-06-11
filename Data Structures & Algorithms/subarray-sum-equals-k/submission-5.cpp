class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
          int n = nums.size();
        int maxLen = 0;
        int count=0;
        for (int i = 0; i < n; i++) {
            int sum = 0;
            for (int j = i; j < n; j++) {
                sum += nums[j];
                if (sum == k) {
                    count++;
                    maxLen = max(maxLen, j - i + 1);
                }
            }
        }
        return count;
    }
};