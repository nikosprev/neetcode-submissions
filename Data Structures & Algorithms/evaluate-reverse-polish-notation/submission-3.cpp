class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(int i=0; i<tokens.size(); i++){
            if(st.empty()){
                 st.push(stoi(tokens[i]));
                 continue;}
            if(tokens[i]=="+" || tokens[i]=="-" || tokens[i]=="/" || tokens[i]=="*" ){
                int c=0;
                int a=st.top(
                );
                st.pop();
                int b=st.top();
                st.pop();
                if(tokens[i]=="+") c=a+b;
                else if(tokens[i]=="/") c=b/a;
                else if(tokens[i]=="-") c=b-a;
                else if(tokens[i]=="*") c=a*b;
                st.push(c);
            }
            else{
                st.push(stoi(tokens[i]));

            }



        }
    return st.top();
    }
};
