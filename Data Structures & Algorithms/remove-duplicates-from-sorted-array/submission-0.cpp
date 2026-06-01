class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int> m;
        int count=0;
        for(auto i : nums){
            m[i]++;
        }
        int index=0;
        for(auto i : m){
            count++;
            nums[index]=i.first;
            index++;
        }

        return count;
    }
};