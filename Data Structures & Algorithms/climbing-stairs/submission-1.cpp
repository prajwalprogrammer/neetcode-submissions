class Solution {
public:
    int solve(int curr, int n, vector<int> &M){
        if(curr == n){
            return 1;
        }
        if(curr > n) return 0;
        if(M[curr] != -1) return M[curr];
        return M[curr] = solve(curr+1,n,M) + solve(curr + 2, n,M);
    }
    int climbStairs(int n) {
        vector<int>M(n+1,-1);
        return solve(0,n,M);
    }
};
