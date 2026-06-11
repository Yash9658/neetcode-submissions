class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        // Approach 1: Brute Force
        // Time Complexity: O(n²)
        // Space Complexity: O(1)
        
        
        int n = nums.size();
        vector<int> result;
        
        for (int i = 0; i < n; i++) {
            // Skip if already in result
            if (!result.empty() && result[0] == nums[i]) continue;
            if (result.size() > 1 && result[1] == nums[i]) continue;
            
            int count = 0;
            for (int j = 0; j < n; j++) {
                if (nums[j] == nums[i]) count++;
            }
            
            if (count > n / 3) {
                result.push_back(nums[i]);
            }
            if (result.size() == 2) break;
        }
        return result;
    }
};