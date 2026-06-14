class Solution {
public:
   vector<std::vector<int>> memo;
    int count(int i,int j, int n, int m){
        if(i==m-1 && j==n-1) return 1;
        else if (i>m-1 || j>n-1){
            return 0;
        }
        else if(memo[i][j]!=-1){
            return memo[i][j];
        }
        else {
            memo[i][j]= count(i+1,j,n,m) +count(i,j+1,n,m);
            return memo[i][j];
    }}
    
    int uniquePaths(int m, int n) {
        memo.assign(m, std::vector<int>(n, -1));
        return count(0,0,n,m);
    }
};
