class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int>M;
        vector<int>ans;
        for(int i=0;i<numbers.size();i++){
            int rem = target - numbers[i];
            if(M.find(rem) != M.end()){
                return {M[rem]+1, i+1};
            }
            M[numbers[i]] = i;
        }

        return {};
    }
};
