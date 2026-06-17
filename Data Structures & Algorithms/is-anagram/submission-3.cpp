class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        unordered_map<char,int> count;


        for (int i=0; i<s.length(); i++){
            if(count.find(s[i])!=count.end()){
                count[s[i]]++;
            }
            else{
                count.insert({s[i],1});
            }
             if(count.find(t[i])!=count.end()){
                count[t[i]]--;
            }
            else{
                count.insert({t[i],-1});
            }

        }
        for(auto j=count.begin(); j!=count.end(); j++){
            if(j->second!=0) return false;
        } 
    return true;
    }
};
