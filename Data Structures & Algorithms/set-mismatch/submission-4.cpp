class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        long long n = nums.size();
        
        // Expected sum and sum of squares for 1 to n
        long long expectedSum = n * (n + 1) / 2;
        long long expectedSumSq = n * (n + 1) * (2 * n + 1) / 6;
        
        // Actual sum and sum of squares
        long long actualSum = 0, actualSumSq = 0;
        for (int num : nums) {
            actualSum += num;
            actualSumSq += (long long)num * num;
        }
        
        // Let d = duplicate, m = missing
        // actualSum - expectedSum = d - m
        long long diff = actualSum - expectedSum;        // d - m
        // actualSumSq - expectedSumSq = d² - m² = (d-m)(d+m)
        long long diffSq = actualSumSq - expectedSumSq; // d² - m²
        
        // d + m = (d² - m²) / (d - m)
        long long sum = diffSq / diff;                   // d + m
        
        int duplicate = (diff + sum) / 2;
        int missing = sum - duplicate;
        
        return {duplicate, missing};
    }
};