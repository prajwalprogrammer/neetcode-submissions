class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>M;
        int i=0,j=0;
        int ans = 0;
        while(j < s.size()){
            if(M.find(s[j]) == M.end()){
              M.insert(s[j]);
              ans = max((int) ans,(int)M.size());
              j++;
            }else{
                M.erase(s[i]);
                i++;
            }
        }
        return ans;
    }
};
