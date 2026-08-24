class Solution {
public:
    vector<vector<int>>memo;
    int solve(vector<int>& nums,int idx,bool isFirst){
        if (idx >= nums.size() || (isFirst && idx == nums.size() - 1))
            return 0;
        if(memo[idx][isFirst] != -1) return memo[idx][isFirst];
        return memo[idx][isFirst] = max(solve(nums,idx+1,isFirst),nums[idx] + solve(nums,idx+2,isFirst));
    }
    int rob(vector<int>& nums) {
        if(nums.size()==1)return nums[0];
        memo.resize(nums.size(), vector<int>(2, -1));
        return max(solve(nums,0,true),solve(nums,1,false));
    }
};
