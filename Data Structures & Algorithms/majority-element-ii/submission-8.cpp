class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        // Approach 3: Sorting
        // Time Complexity: O(n log n)
        // Space Complexity: O(1) (depending on sort implementation)
        
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<int> result;
        
        for (int i = 0; i < n; i++) {
            int j = i;
            // Count duplicates
            while (j < n && nums[j] == nums[i]) {
                j++;
            }
            
            if (j - i > n / 3) {
                result.push_back(nums[i]);
            }
            i = j - 1;
        }
        
        return result;
    }
};