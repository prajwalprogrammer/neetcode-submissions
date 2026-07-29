class Solution {
public:
    bool solve(int idx , vector<int>& nums){
        if(idx >= nums.size()-1) return true;

        int maxJump = min((int)nums.size()-1 , idx + nums[idx]);
        while(maxJump > idx){
            if(solve(maxJump, nums)){
                return true;
            }
            maxJump--;
        }
        return false;
    }
    bool canJump(vector<int>& nums) {
        return solve(0,nums);
    }
};
