class Solution {
public:
    void solve(int i,vector<int>&nums,int target,vector<vector<int>>& ans, vector<int>&sub){
        if(target == 0) {
            ans.push_back(sub);
            return;
        }
        if(target < 0){
            return;
        }
        if(i >= nums.size()){
            return;
        }
        if(target >= nums[i]){
            sub.push_back(nums[i]);
            solve(i,nums,target-nums[i],ans,sub);
            sub.pop_back();
        }
        solve(i+1,nums,target,ans,sub);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        vector<int>sub;
        solve(0,nums,target,ans,sub);
        return ans;
    }
};
