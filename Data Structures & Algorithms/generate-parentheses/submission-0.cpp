class Solution {
public:
    void func(int open,int close,int n,string temp,vector<string> &t){
        if(open==n && close==n){
            t.push_back(temp);
            return;
        }
        if(open<n){
            temp+="(";
            func(open+1,close,n,temp,t);
            temp.pop_back();

        }
        if(close<open){

            temp+=")";
            func(open,close+1,n,temp,t);
            temp.pop_back();

        }
    }
    vector<string> generateParenthesis(int n) {
        string temp;
        int open=0;
        int close=0;
        vector<string> t;
        func(open,close,n,temp,t);
        return t;
    }
};
