class Solution {
public:
    int missingNumber(vector<int>& arr) {
        unordered_set<int> s(arr.begin(),arr.end());
        for(int i=0;i<=arr.size();i++){
            if(s.find(i)==s.end())  return i;
        }
        return 0;
    }
};
