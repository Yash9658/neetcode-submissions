class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        // Majority element always occupies the middle index

        // Time Complexity: O(n log n)
        // Space Complexity: O(1) (or O(n) depending on sort implementation)
        // Why it works: Since majority element appears > n/2 times, it must occupy the median position after sorting


        return nums[nums.size() / 2];
    }
};