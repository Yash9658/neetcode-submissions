class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        
        sort(nums.begin(), nums.end());
        
        int longest = 1;
        int currentStreak = 1;
        
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] != nums[i-1]) {  // Skip duplicates
                if(nums[i] == nums[i-1] + 1) {
                    currentStreak++;
                    longest = max(longest, currentStreak);
                } else {
                    currentStreak = 1;
                }
            }
        }
        
        return longest;
    }
};