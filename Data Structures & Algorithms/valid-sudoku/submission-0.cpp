class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        vector<unordered_set<int>> rows(9);
        vector<unordered_set<int>> cols(9);
        vector<unordered_set<int>> b(9);
        for (int r = 0; r < 9; r++) {
            for (int c = 0; c < 9; c++) {
                int num=board[r][c];
                if (board[r][c] == '.') continue;

                int box= (r/3)*3 + (c/3);

                if (rows[r].count(num) || cols[c].count(board[r][c]) || b[box].count(board[r][c])) {
                    return false;
                }

                rows[r].insert(board[r][c]);
                cols[c].insert(board[r][c]);
                b[box].insert(board[r][c]);
            }
        }
        return true;
    }
};