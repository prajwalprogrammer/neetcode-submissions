class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // XOR
        // int n = nums.size();
        // int xorr = n;
        // for(int i=0;i<n;i++){
        //     xorr ^= i ^ nums[i];
        // }
        // return xorr;
        
        // Math
        int ans = nums.size();
        for(int i=0;i<nums.size();i++){
            ans += i - nums[i];
        }
        return ans;

    }
};
