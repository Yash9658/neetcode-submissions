class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        // Time Complexity: O(m × log n)
        // Space Complexity: O(1)   
        // in this we are eleminating the rows which have target is small from first ele and bigger from last element of a particular row
        // the applying binary search to find the given element in the selected row
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        for (int i = 0; i < rows; i++) {
            // Skip this row if target can't be in it
            if (target < matrix[i][0] || target > matrix[i][cols - 1]) {
                continue;
            }
            
            // Binary search within this row
            int left = 0, right = cols - 1;
            while (left <= right) {
                int mid = left + (right - left) / 2;
                if (matrix[i][mid] == target) return true;
                else if (matrix[i][mid] < target) left = mid + 1;
                else right = mid - 1;
            }
        }
        return false;
    }
};
