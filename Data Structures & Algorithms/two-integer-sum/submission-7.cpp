class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]] = i;
        }
        for( int i=0;i<nums.size();i++){
            int ans=target-nums[i];
            if(m.find(ans)!=m.end() && m[ans] != i){
                return {i,m[ans]};
            }
        }
        return {};
    }
};
