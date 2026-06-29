class Solution {
public:
    void func(vector<vector<int>> &res, int index, int target, vector<int>& c, 
              vector<int>& diary, int sum, int n) {
        if (sum == target) {
            res.push_back(diary);
            return;
        }
        if (sum > target || index == n) {
            return;
        }
        
        // EXCLUDE: Don't take current element
        func(res, index + 1, target, c, diary, sum, n);
        
        // INCLUDE: Take current element
        diary.push_back(c[index]);
        sum += c[index];
        func(res, index, target, c, diary, sum, n);
        sum -= c[index];
        diary.pop_back();
    }
    
    vector<vector<int>> combinationSum(vector<int>& c, int t) {
        vector<vector<int>> res;
        vector<int> diary;
        func(res, 0, t, c, diary, 0, c.size());
        return res;
    }
};