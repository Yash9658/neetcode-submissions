class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        int xorResult = 0;
        
        // Step 1: XOR all numbers from 1 to n and all array elements
        // This gives us duplicate ^ missing
        for (int i = 1; i <= n; i++) {
            xorResult ^= i;
        }
        for (int num : nums) {
            xorResult ^= num;
        }
        
        // Step 2: Find any bit where duplicate and missing differ
        // Get the rightmost set bit
        int differentBit = xorResult & -xorResult;
        
        // Step 3: Separate numbers into two groups based on this bit
        int group1 = 0, group2 = 0;
        
        // XOR numbers from 1 to n
        for (int i = 1; i <= n; i++) {
            if (i & differentBit) group1 ^= i;
            else group2 ^= i;
        }
        
        // XOR array elements
        for (int num : nums) {
            if (num & differentBit) group1 ^= num;
            else group2 ^= num;
        }
        
        // group1 and group2 now contain {duplicate, missing} in some order
        // Check which one appears twice in the array
        for (int num : nums) {
            if (num == group1) {
                return {group1, group2};  // group1 is duplicate, group2 is missing
            }
        }
        
        return {group2, group1};
    }
};