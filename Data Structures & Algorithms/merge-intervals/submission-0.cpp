class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& inte) {
       if(inte.size()<=1)   return inte;
       vector<vector<int>> ans;
       sort(inte.begin(),inte.end());
       ans.push_back(inte[0]);
       int ansptr=0;
       for(int i=1;i<inte.size();i++){
        if(ans[ansptr][1]>=inte[i][0]){
            ans[ansptr][1]=max(ans[ansptr][1],inte[i][1]);
        }
        else{
            ansptr++;
            ans.push_back(inte[i]);
        }
       }
       return ans;
    } 
};