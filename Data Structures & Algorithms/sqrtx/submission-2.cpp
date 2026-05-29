class Solution {
public:
    int mySqrt(int x) {
        if(x<2) return x;
        int i=0;
        int j=x;
        int ans=0;
        while(i<=j){
            int mid=i+(j-i)/2;
            if(mid<=x/mid)  {
                ans=mid;
                i=mid+1;
            }
            else{
                j=mid-1;
            }
        }
        return ans;
    }
};