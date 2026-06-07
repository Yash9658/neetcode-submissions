class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;
        
        int longest = 1;
        
        for(int i = 0; i < n; i++) {
            int currentNum = nums[i];
            int count = 1;
            
            // Try to find currentNum + 1, currentNum + 2, ...
            while(true) {
                int found = 0;
                // Search for next number
                for(int j = 0; j < n; j++) {
                    if(nums[j] == currentNum + 1) {
                        count++;
                        currentNum++;
                        found = 1;
                        break;
                    }
                }
                if(!found) break;
            }
            longest = max(longest, count);
        }
        return longest;
    }
};