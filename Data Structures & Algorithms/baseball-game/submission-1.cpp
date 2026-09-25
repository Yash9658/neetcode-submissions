class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<string> s;
        stack<string> s1;
        
        for(auto i : operations){
            s.push(i);
        }
        while(!s.empty()){
            s1.push(s.top());
            s.pop();
        }
        vector<string> ans;
        while(!s1.empty()){
            if(s1.top()=="+"){
                if(ans.size()>=2){
                int ans2= stoi(ans[ans.size()-1]) + stoi(ans[ans.size()-2]) ;
                ans.push_back(to_string(ans2));}
            }
            else if(s1.top()=="C"){
                ans.pop_back();
            }
            else if(s1.top()=="D"){
                int ans2=stoi(ans.back());
                ans2*=2;
                ans.push_back(to_string(ans2));
            }
            else{
                ans.push_back(s1.top());
            }
                s1.pop();
        }
        int res=0;
        for(auto i : ans){
            res+=stoi(i);
        }
        return res;
    }
};