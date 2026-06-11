class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int i=0;
        int j=1;
        vector<int> result;
        for(i=0; i<temperatures.size(); i++){
            if(i==temperatures.size()-1){
                result.push_back(0);
                break;
            }
            for(j=i+1; j<temperatures.size(); j++){
                
                if(temperatures[j]>temperatures[i]){
                    result.push_back(j-i);
                    break;
                }
                if(j==temperatures.size()-1){
                    result.push_back(0);
                }
                
            }
        }
        return result;
    }
};
