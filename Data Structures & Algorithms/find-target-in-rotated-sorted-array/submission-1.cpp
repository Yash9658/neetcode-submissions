class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i=0;
        int j=nums.size()-1;
        while(i<=j){
            int mid= i + (j-i)/2;
            if(nums[mid]==target)   return mid;
            //checking if left half is sorted  
            if(nums[i]<=nums[mid]){
               
               
                if(nums[i]<=target && target<=nums[mid]){
                 j=mid-1;   
                }
                else{
                    i=mid+1;
                }
            }
            else {
                 if(nums[mid] <= target && target <= nums[j]) {
                    i = mid + 1;  // Search right
                } else {
                    j = mid - 1;  // Search left
                }
            }
        }
        return -1;
    }
};
