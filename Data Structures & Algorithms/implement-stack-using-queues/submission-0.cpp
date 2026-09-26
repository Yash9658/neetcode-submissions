class MyStack {
public:

    vector<int> v;
    MyStack() {
        
    }
    
    void push(int x) {
        v.push_back(x);
    }
    
    int pop() {
        if(v.size()>0){
        int ans=v[v.size()-1];
        v.pop_back();
        return ans;
        }
        return 0;
    }
    
    int top() {
        return v[v.size()-1];
    }
    
    bool empty() {
        return !(v.size());
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */