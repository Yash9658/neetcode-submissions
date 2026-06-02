class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans(2*nums.size());
        int j=0;
        for(int i=0;i<nums.size()*2; i++){
            if(i==nums.size())  j=0;
            ans[i]=nums[j];
            j++;
        }
        return ans;
    }
};