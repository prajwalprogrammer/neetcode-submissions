class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int countW = 0, countB = 0;
        for(int i=0;i<k;i++){
            if(blocks[i] == 'W'){
                countW++;
            }else{
                countB++;
            }
        }
        int ans = countW;
        for(int i=k;i<blocks.size();i++){
            if(blocks[i-k] == 'W'){
                countW--;
            }else{
                countB--;
            }
            if(blocks[i] == 'W'){
                countW++;
            }else{
                countB++;
            }
            ans = min(ans,countW);
        }
        return ans;
    }
};