class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
          unordered_map<int,int> m;
        int index=0;
        for(auto i : nums){
            if(m.find(i)!=m.end()){
                if((index-m[i])<=k)  return true;
            }
            m[i]=index;
            index++;
        }
        return false;
    }
};