class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        for(int i=0;i<nums.size();i++){
            int minval = min(i+k+1,(int)nums.size());
            for(int j=i+1;j<minval;j++){
                if(nums[i] == nums[j])return true;
            }
        }
        return false;
    }
};