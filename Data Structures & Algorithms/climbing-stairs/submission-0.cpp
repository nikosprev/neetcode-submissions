class Solution {
public:
        vector<int> values;

    int climb(int i,int n){
        if(i==n){
            return 1;
        }
        else if(i>n) return 0;
        else if (values[i] != -1) return values[i];
        else{
            values[i]=climb(i+1,n)+climb(i+2,n);
            return values[i];
        }
    }
    int climbStairs(int n) {
        values.resize(n,-1);
        return climb(0,n);
    }
};
