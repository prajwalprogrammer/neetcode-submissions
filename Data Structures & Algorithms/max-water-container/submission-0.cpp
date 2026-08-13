class Solution {
public:
    int maxArea(vector<int>& heights) {
        int end = heights.size()-1;
        int start = 0;
        int ans = 0;
        while(start < end) {
            int area = min(heights[start],heights[end]) * (end - start);
            ans = max(ans,area);
            if(heights[start] <= heights[end]){
                start++;
            }else{
                end--;
            }
        }
        return ans;
    }
};
