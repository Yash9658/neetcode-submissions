class Solution {
public:
    int majorityElement(vector<int>& nums) {

        // Approach 7: Boyer-Moore Voting Algorithm (OPTIMAL)
        // Each time we see a different element, we cancel out a pair
        // Since majority element appears > n/2 times, it will survive all cancellations
        // Time Complexity: O(n)
        // Space Complexity: O(1)
        
        int candidate = 0;
        int count = 0;
        
        // Phase 1: Find potential candidate
        for (int num : nums) {
            if (count == 0) {
                candidate = num;
            }
            count += (num == candidate) ? 1 : -1;
        }
        
        // Phase 2: Verification (not strictly needed as majority always exists)
        // count = 0;
        // for (int num : nums) {
        //     if (num == candidate) count++;
        // }
        // return count > nums.size() / 2 ? candidate : -1;
        
        return candidate;
    }
};