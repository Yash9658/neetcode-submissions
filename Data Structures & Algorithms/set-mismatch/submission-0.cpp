class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {

        int missing=0;
        sort(nums.begin(),nums.end());
        for(int i=1;i<=nums.size();i++){
            bool flag=false;
        for(int j=0;j<nums.size();j++){
            if(nums[j]==i) { flag=true; break;}
            
        }    
        if(!flag)  {
            missing =i;
            break;
        }
        }
        
        for(int j=0;j<nums.size();j++){
            if(j>0 && nums[j-1]==nums[j])  {
                return {nums[j],missing};
            }
        }
        
        return {0,0};
    }
};