class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
       int K=*max_element(piles.begin(),piles.end());
       vector<int> ks;
    
       int left=1;
       int right=K;

       while(left<=right){
        int mid=(right+left)/2;
        int total=0;
        for(int i=0; i<piles.size(); i++){
            total+=ceil((double)piles[i]/mid);
        }
        if(total<=h){
            K=mid;
            right=mid-1;
        }
        else{
            left=mid+1;
        }
       }
        return K;
    }

};
