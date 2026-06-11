class MinStack {
public:
        stack<int> st;

    MinStack() {
    }
    
    void push(int val) {
        return st.push(val);
    }
    
    void pop() {
        return st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        int min=st.top();
        stack<int> temp=st;
        while(!temp.empty()){
            if(min>temp.top()){
                min=temp.top();
                
            }
            temp.pop();

        }
        return min;
    }
};
