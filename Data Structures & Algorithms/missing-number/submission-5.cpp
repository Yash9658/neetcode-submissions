class Solution {
public:
    int missingNumber(vector<int>& arr) {
         int n=arr.size();
        int xorx=n;
        for(int i=0;i<n;i++){
            xorx^=i^arr[i];
       
        }
        return xorx;
    }
};
