class Solution {
public:
    int dp[101];
    int solve(int idx, vector<int>& nums){
        if(idx >= nums.size()){return 0;}

        if(dp[idx] != -1) return dp[idx];

        int take = nums[idx] + solve(idx + 2, nums);
        int nottake = solve(idx+1,nums);

        return dp[idx] = max(take,nottake);
    }
    int rob(vector<int>& nums) {
        fill(begin(dp), end(dp), -1);
        return solve(0,nums);
    }
};