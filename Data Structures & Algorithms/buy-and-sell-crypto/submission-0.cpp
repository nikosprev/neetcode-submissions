class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i=0;
        int j=0;
        int best=0;
        for(i=0; i<prices.size(); i++){
            int profit=0;
            for(j=0; j<i; j++){
                if(prices[i]-prices[j]>profit){
                    profit=prices[i]-prices[j];
                }
            }
            if(profit>best){
                best=profit;
            }
        }
    return best;
    }
};
