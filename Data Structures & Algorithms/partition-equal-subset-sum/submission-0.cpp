class Solution {
public:
    bool func(vector<int>& nums,int sum,int index,int currsum){
        if(index<0 ) return false;
        if(currsum==sum) return true;

        return func(nums,sum-nums[index],index-1,currsum) || func(nums,sum,index-1,currsum) ;
    }
    bool canPartition(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        if(sum%2) return false;
        return func(nums,sum,n-1,sum/2);
    }
};
