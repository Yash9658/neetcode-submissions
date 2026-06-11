class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Approach 2: HashMap / Frequency Count
        // Time Complexity: O(n) average, O(n²) worst-case (hash collisions)
        // Space Complexity: O(n)

        
        int n = nums.size();
        unordered_map<int, int> freq;
        
        for (int num : nums) {
            freq[num]++;
            if (freq[num] > n / 2) {
                return num;
            }
        }
        return -1;
    }
};