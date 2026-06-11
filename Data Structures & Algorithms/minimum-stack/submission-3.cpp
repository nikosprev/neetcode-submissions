class MinStack {
public:
        stack<int> st;
    stack<int> temp;
    MinStack() {
        
    }
    
    void push(int val) {
        if(temp.empty()) temp.push(val);
        else temp.push(min(temp.top(),val));
        return st.push(val);
    }
    
    void pop() {
        temp.pop();
        return st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return temp.top();
    }
};
