class Solution {
public:
    int numRescueBoats(vector<int>& p, int lim) {
        int ans=0;
        int l=0;
        int r=p.size()-1;
        sort(p.begin(),p.end());
        while(l<=r){
            if((p[l] + p[r])<=lim){
                l++;
                r--;
            }
            else{
                r--;
            }
            ans++;
        }
        return ans;
    }
};