class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        // Approach 4: Hash Map (One Pass) - OPTIMAL
        // Time Complexity: O(n)
        // Space Complexity: O(n)

        unordered_map<int, int> numToIndex;
        
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            
            if (numToIndex.count(complement)) {
                return {numToIndex[complement], i};
            }
            
            numToIndex[nums[i]] = i;
        }
        return {};
    }
};