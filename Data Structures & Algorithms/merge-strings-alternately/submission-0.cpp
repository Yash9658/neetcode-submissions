class Solution {
public:
    string mergeAlternately(string w1, string w2) {
        int s1 =0;
        int s2=0;
        int l1=w1.size(),l2=w2.size();
        string ans;
        while(s1<l1 && s2<l2){
            ans+=w1[s1++];
            ans+=w2[s2++];
        }
        while(s1<l1){
            ans+=w1[s1++];
        }
        while(s2<l2){
            ans+=w2[s2++];
        }
        return ans;
    }
};