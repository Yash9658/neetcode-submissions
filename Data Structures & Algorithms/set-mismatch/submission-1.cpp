class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int> m;
        for(auto i : nums){
            m[i]++;
        }
        int rep=0;
        int mis=0;
        
        for(int i=1;i<=nums.size();i++){
            if(m.find(i)!=m.end()){
                if(m[i]>1)  rep=i;
            }
            else{
                mis=i;
            }
        }
        return {rep,mis};
    }
};
