class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int x) {
        for(auto i: m){
            for(auto j : i){
                if(j==x)    return true;
            }
        }
        return false;
    }
};
