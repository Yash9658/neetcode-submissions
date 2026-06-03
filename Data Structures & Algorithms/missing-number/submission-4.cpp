class Solution {
public:
    int missingNumber(vector<int>& arr) {
         int n=arr.size()+1;
        for(int i=0;i<=n;i++){
        bool flag=false;
            for(int j=0;j<n-1;j++){
                if(arr[j]==i)  {flag=true; break;}
                
            }
            if(!flag)    return i;
        }
        return 0;
    }
};
