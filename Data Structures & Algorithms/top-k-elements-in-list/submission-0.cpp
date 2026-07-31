class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // Bucket Sort

        unordered_map<int,int>count;
        vector<vector<int>>freq(nums.size() + 1);
        for(int i:nums){
            count[i]++;
        }

        for(auto i:count){
            freq[i.second].push_back(i.first);
        }

        vector<int>ans;
        for(int i=freq.size()-1;i>0;i--){
            for(int n : freq[i]){
                ans.push_back(n);
                if(ans.size() == k) return ans;
            }
        }
        return ans;

    }
};
