class Solution {
public:
    void solve(int i, vector<int>& nums,vector<int> &sub,vector<vector<int>>&ans){
        if(i >= nums.size()) return ans.push_back(sub);

        sub.push_back(nums[i]);
        solve(i+1,nums,sub,ans);
        sub.pop_back();
        solve(i+1,nums,sub,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>sub;
        vector<vector<int>>ans;
        solve(0,nums,sub,ans);
        return ans;
    }
};
