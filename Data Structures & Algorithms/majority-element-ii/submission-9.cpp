class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        
// Approach 4: Boyer-Moore Voting Algorithm Extension (OPTIMAL)

// Why it works:

// At most two elements can exceed n/3 threshold
// We track two candidates with their counts
// When we see a different number, we decrement both counts
// This cancels out non-majority elements
// Time Complexity: O(n)
// Space Complexity: O(1)

        // Phase 1: Find potential candidates
        int candidate1 = 0, candidate2 = 0;
        int count1 = 0, count2 = 0;
        
        for (int num : nums) {
            if (num == candidate1) {
                count1++;
            }
            else if (num == candidate2) {
                count2++;
            }
            else if (count1 == 0) {
                candidate1 = num;
                count1 = 1;
            }
            else if (count2 == 0) {
                candidate2 = num;
                count2 = 1;
            }
            else {
                count1--;
                count2--;
            }
        }
        
        // Phase 2: Verify candidates
        count1 = 0, count2 = 0;
        for (int num : nums) {
            if (num == candidate1) count1++;
            else if (num == candidate2) count2++;
        }
        
        vector<int> result;
        if (count1 > n / 3) result.push_back(candidate1);
        if (count2 > n / 3) result.push_back(candidate2);
        
        return result;
    }
};