class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        map<int,int> m;
        vector<int> v;
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }

        while (k--){
            int max=INT_MIN;
            int key;
        for(auto i : m){
            if(i.second>max)   { 
            max=i.second;
            key=i.first;
            }
        }
            v.push_back(key);
            auto it = m.find(key);
    if (it != m.end()) {
        m.erase(it);  // erases the "banana" entry
} 
        }    
        return v; 
    }
};
