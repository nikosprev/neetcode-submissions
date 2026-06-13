class Solution {
public:
    vector<int> cache;
    int climb(int i, vector<int> cost){
        int n=cost.size();
        if(n==i){
            return 0;
        }
        else if(i>n){
            return 0;
        }
        else if (cache[i]!=-1){
            return cache[i];
        }
        else {
            cache[i]= cost[i]+min(climb(i+1,cost),climb(i+2,cost));
            return cache[i];
        }
    }
    int minCostClimbingStairs(vector<int>& cost) {
        cache.resize(cost.size(),-1);
        return min(climb(0,cost),climb(1,cost));
    }
};
