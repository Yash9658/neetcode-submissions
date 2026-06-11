class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        // Time Complexity: O(n)
    // Space Complexity: O(min(n, 26))
    
        int n = s.length();
        int maxlen = 0;
        unordered_map<char,int> m;
        int left=0;
        for(int i=0;i<n;i++){
            if(m.find(s[i])!=m.end() && m[s[i]]>=left){
                left=m[s[i]]+1;
            }
            m[s[i]]=i;
            maxlen=max(maxlen,i-left+1);
        }
        return maxlen;
    }
};
