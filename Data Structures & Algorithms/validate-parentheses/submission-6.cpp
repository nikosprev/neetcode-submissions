class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        unordered_map<char,char> hash={
            {')','('},
            {']','['},
            {'}','{'}

        };
        for(int i=0; i<s.length(); i++){
            if(!st.empty()){
                char c= st.top();
                if(hash.find(c)==hash.end()){    
                     if(hash.find(s[i])!=hash.end()){   
                        if(c == hash[s[i]]){
                        st.pop();
                         continue;
                        }
                        else return false;
                      }
                }
                else{
                    st.push(s[i]);
                    continue;
                }
            }
            st.push(s[i]);

        }
        if(st.empty())
            return true;
        else return false;

    }
};
