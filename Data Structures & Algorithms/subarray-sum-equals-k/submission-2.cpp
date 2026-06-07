class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int pref=0;
        
        int ans=0;
        unordered_map<int,int> m;
        m.insert({0,1});
        for(auto i : nums){
            pref+=i;
            if(m.find(pref-k)!=m.end()){
                ans+=m[pref-k];
            }
        m[pref]++;
        }
        return ans;
    }
};