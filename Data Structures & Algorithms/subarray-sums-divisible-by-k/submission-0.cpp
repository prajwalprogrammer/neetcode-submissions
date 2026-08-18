class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int sum = 0;
        unordered_map<int,int>M;
        M[0] = 1;
        int i = 0;
        int ans = 0;
        while(i < nums.size()){
            sum += nums[i];
            int rem = sum % k;
            if(rem < 0) rem += k;
            ans += M[rem];
            M[rem]++;
            i++;
        }
        return ans;
    }
};