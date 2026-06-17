class Solution {
public:
     bool isAnagram(string s, string t,unordered_map<char,int> count) {
        if(s.length()!=t.length()) return false;
       

        for (int i=0; i<s.length(); i++){
        
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


    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<int,bool> in_list;

        for(int i=0; i<strs.size(); i++){
            if(in_list.find(i)!=in_list.end()) continue;
            else{
                result.insert(result.begin(),{strs[i]});
                unordered_map<char,int> count;
                for (int k=0; k<strs[i].length(); k++){
                         if(count.find(strs[i][k])!=count.end()){
                            count[strs[i][k]]++;
                         }
                        else{
                        count.insert({strs[i][k],1});
                         }
                }

                for(int j=i+1; j<strs.size(); j++){
                        if(in_list.find(j)!=in_list.end()) continue;
                        
                      if(isAnagram(strs[i], strs[j],count)) {
                           result[0].insert(result[0].begin(),{strs[j]});
                           in_list.insert({j,true}); 
                      } 
                }
                
                in_list.insert({i,true});   



            }

        }
        return result;
    }
};
