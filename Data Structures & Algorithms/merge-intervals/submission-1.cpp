class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& inte) {
       if(inte.size()<=1)   return inte;
    //    without extra array
    // time - O(nlogn) space-O(1)
       sort(inte.begin(),inte.end());
       
       int ansptr=0;
       for(int i=1;i<inte.size();i++){
        if(inte[ansptr][1]>=inte[i][0]){
            inte[ansptr][1]=max(inte[ansptr][1],inte[i][1]);
        }
        else{
            ansptr++;
            inte[ansptr]=inte[i];
        }
       }
       inte.resize(ansptr+1);
       return inte;
    } 
};