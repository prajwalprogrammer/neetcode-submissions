class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int count = 0;
        int first_last = intervals[0][1];

        for(int i=1;i<intervals.size();i++){
            if(first_last > intervals[i][0]){
                first_last = min(first_last,intervals[i][1]);
                count++;
            }else{
                first_last = intervals[i][1];
            }
        }
        return count;
    }
};
