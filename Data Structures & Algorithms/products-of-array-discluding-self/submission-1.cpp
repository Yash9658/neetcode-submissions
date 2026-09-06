class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod=1;
        int cnt=0;
        for(auto i : nums){
            if(i==0) cnt++;
            else prod*=i; 
        }
        vector<int> ans(nums.size());
        if(cnt>1)   return ans;
        else if(cnt==1) {
            for(int i=0;i<nums.size();i++){
               if(nums[i]==0) ans[i]=prod;
               else ans[i]=0;
            }
            return ans;
        }
        else{
            for(int i=0;i<nums.size();i++){
                ans[i]=(int)(prod/nums[i]);
            }
        }
        return ans;
    }
};
