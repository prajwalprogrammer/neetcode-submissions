class Solution {
public:
    vector<vector<int>> dp;
    bool isValid(int i,int j,int m,int n){
        return ((i >= 1 && i <= m) && (j >= 1 && j <=n));
    }
    int solve(int i,int j,int m,int n){
        if(i == m && j == n) return 1;
        if(!isValid(i,j,m,n)) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        return dp[i][j] = solve(i+1,j,m,n) + solve(i,j+1,m,n);
    }
    int uniquePaths(int m, int n) {
        dp.resize(m+1,vector<int>(n+1,-1));
        return solve(1,1,m,n);
    }
};
