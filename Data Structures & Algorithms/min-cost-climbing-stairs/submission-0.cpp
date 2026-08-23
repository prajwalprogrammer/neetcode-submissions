class Solution {
public:
    vector<int>dp;
    int solve(vector<int>& cost, int idx){
        if(idx >= cost.size()){
            return 0;
        }
        if(dp[idx] != -1) return dp[idx];
        int take_1 = cost[idx] + solve(cost,idx+1);
        int take_2 = cost[idx] + solve(cost,idx+2);
        return dp[idx] = min(take_1,take_2);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        dp.resize(cost.size(), -1);
        return min(solve(cost,1),solve(cost,0));
    }
};
