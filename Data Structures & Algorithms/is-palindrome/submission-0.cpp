class Solution {
public:
    bool isPalindrome(string s) {
      string p="";
      int n=s.size();
      for(int i=0;i<n;i++){
         if (isalnum(s[i])) {
                p += tolower(s[i]);
            }
        else if(s[i]>='a' && s[i]<='z') p+=s[i];
        else if(s[i]>='0' && s[i]<='9') p+=s[i];
        else        continue;
      }  
      s=p;
      reverse(p.begin(),p.end());
      return p==s;  
    }
};
