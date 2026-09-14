class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> m;
        for(auto i:nums){
            if(m.find(i)!=m.end()) return true;
            m[i]++;
        }
        return false;
    }
};