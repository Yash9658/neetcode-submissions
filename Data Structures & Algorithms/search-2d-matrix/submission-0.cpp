class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int x) {
        // Time Complexity: O(m × n)
        // Space Complexity: O(1)
        
        for(auto i: m){
            for(auto j : i){
                if(j==x)    return true;
            }
        }
        return false;
    }
};
