class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> m;
        vector<vector<string>> ans;
        for(auto  i : strs){
            vector<int> count(26,0);
            for(char c : i){
                count[c-'a']++;
            }
            string key(26,'*');
            for(int i=0;i<26;i++){
                key+='a'+count[i];
            }
            m[key].push_back(i);
        }


        for(auto i : m){
            ans.push_back(i.second);
        }
        return ans;
    }
};
