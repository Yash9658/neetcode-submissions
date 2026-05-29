class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& s) {
      vector<vector<string>> sp; 

        unordered_map<string,int> m;
        for (int i = 0; i < s.size(); i++)
        {
            string ss=s[i];
            sort(ss.begin(),ss.end());
            m[ss]++;
        }
        
        
        for (auto k : m)
        {
            string si=k.first;
            sort(si.begin(),si.end());
            vector<string> p;
            for (int i = 0; i <s.size(); i++)
            {
                string pi=s[i];
            sort(pi.begin(),pi.end());    
                if(si==pi)
                {
                p.push_back(s[i]);
                }
            }
            sp.push_back(p);       
        }
        return sp;  
    }
};
