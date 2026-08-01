class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int>M;
        for(int i:nums){
            if(M.find(i) != M.end()){
                return true;
            }
            M[i]++;
        }
        return false;
    }
};