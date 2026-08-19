class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int ans = 0;
        int i = 0, j = 0;
        for(int i = 0;i<grumpy.size();i++){
            if(grumpy[i] == 0){
                ans += customers[i];
            }
        }
        int max_ans = 0;
        while(j<grumpy.size()){
            if(grumpy[j] == 1){
                ans += customers[j];
            }
            if((j - i + 1) == minutes){
                max_ans = max(max_ans,ans);
                if(grumpy[i] == 1){
                    ans -= customers[i];
                }
                i++;
            }
            j++;
        }
        return max_ans;
    }
};