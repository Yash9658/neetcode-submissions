class Solution:
    def mergeAlternately(self, w1: str, w2: str) -> str:
        s1=0
        s2=0
        l1=len(w1)
        l2=len(w2)
        ans="";
        while s1<l1 and s2<l2 :
            ans+=w1[s1]
            ans+=w2[s2]
            s1=s1+1
            s2=s2+1
        
        while s1<l1 :
            ans+=w1[s1]
            s1=s1+1
        

        while s2<l2:
            ans+=w2[s2]
        
            s2=s2+1
        
        
        return ans;