class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>> M;

        for(int i: nums){
            M.push(i);
            if(M.size() > k){
                M.pop();
            }
        }
        return M.top();
    }
};
