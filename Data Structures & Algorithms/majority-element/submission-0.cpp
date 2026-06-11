class Solution {
public:
    int majorityElement(vector<int>& nums) {
    // Approach 1: Brute Force
    // O(n²) - Check each element's frequency
    // Time Complexity: O(n²)
    // Space Complexity: O(1)


      int n = nums.size();
        int majorityCount = n / 2;
        
        for (int i = 0; i < n; i++) {
            int count = 0;
            for (int j = 0; j < n; j++) {
                if (nums[j] == nums[i]) {
                    count++;
                }
            }
            if (count > majorityCount) {
                return nums[i];
            }
        }
        return -1;
    }
};