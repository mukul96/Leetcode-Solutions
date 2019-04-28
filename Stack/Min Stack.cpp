class MinStack {
public:
    /** initialize your data structure here. */
    vector<int> m;
    vector<int> mini;
    MinStack() {
        
    }
    
    void push(int x) {
        m.push_back(x);
        //mini.push_back( min(x,mini.back()) );
        if(!mini.empty()){
            int k=mini.back();
            mini.push_back( min(x,k) );
        }
        else{
            mini.push_back(x);
        }
        
    }
    
    void pop() {
        m.pop_back();
        mini.pop_back();
    }
    
    int top() {
        return(m.back());
    }
    
    int getMin() {
        return mini.back();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
