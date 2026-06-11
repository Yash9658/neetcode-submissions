class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // Time Complexity: O(m + n)
        // Space Complexity: O(1)
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        int row = 0;
        int col = cols - 1;  // Start at top-right corner
        
        while (row < rows && col >= 0) {
            if (matrix[row][col] == target) {
                return true;
            }
            else if (matrix[row][col] > target) {
                col--;  // Move left (smaller values)
            }
            else {
                row++;  // Move down (larger values)
            }
        }
        return false;
    }
};
