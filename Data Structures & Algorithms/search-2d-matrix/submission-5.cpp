class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        // Step 1: Find the correct row
        int top = 0, bottom = rows - 1;
        int targetRow = -1;
        
        while (top <= bottom) {
            int mid = top + (bottom - top) / 2;
            
            if (target >= matrix[mid][0] && target <= matrix[mid][cols - 1]) {
                targetRow = mid;
                break;
            }
            else if (target < matrix[mid][0]) {
                bottom = mid - 1;
            }
            else {
                top = mid + 1;
            }
        }
        
        if (targetRow == -1) return false;
        
        // Step 2: Binary search within the target row
        int left = 0, right = cols - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            if (matrix[targetRow][mid] == target) return true;
            else if (matrix[targetRow][mid] < target) left = mid + 1;
            else right = mid - 1;
        }
        
        return false;
    }
};