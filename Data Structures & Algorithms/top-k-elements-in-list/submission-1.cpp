class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        for(int i=0; i<nums.size(); i++){
            count[nums[i]]++;
        }

        vector<pair<int,int>> arr;
        for(auto s=count.begin(); s!=count.end(); s++){
            arr.push_back({s->second,s->first});
        }

        sort(arr.rbegin(),arr.rend());
        
       
        vector<int> result;

        for(int i=0; i<k; i++){
           
        
                result.push_back(arr[i].second);
        
       
        }
        return result;
    }
};
