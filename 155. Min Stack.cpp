class MinStack {
public:
    stack<int> st; 
    stack<int> minSt; 
    
    void push(int val) {
        if(minSt.empty() || val <= minSt.top()){
            minSt.push(val);
        }
        st.push(val);
    }
    
    void pop() {
        if(minSt.top() == st.top())
        {
            minSt.pop();
        }
        st.pop();
    }
    
    int top() {
        return st.top(); 
    }
    
    int getMin() {
        return minSt.top(); 
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
