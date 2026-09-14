class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans(nums.size()*2);
        int j=0;
        for(int i=0;i<nums.size()*2;i++){
            if(i>=nums.size()) {ans[i] = nums[j]; j++;}
            else ans[i]=nums[i];

        }
        return ans;
    }
};