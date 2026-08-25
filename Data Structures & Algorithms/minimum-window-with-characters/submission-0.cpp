class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> window, countT;

        if(t.empty()) return "";

        for(char ch : t){
            countT[ch]++;
        }
        int need = countT.size();
        int have = 0;
        int l = 0;
        int reslen = INT_MAX;
        pair<int,int>res = {-1,-1};
        for(int r = 0;r<s.size();r++){
            char ch = s[r];
            window[ch]++;
            if(countT.count(ch) && countT[ch] == window[ch]){
                have++;
            }
            while(have == need){
                if((r-l+1) < reslen){
                    reslen = r - l + 1;
                    res = {l,r};
                }
                window[s[l]]--;
                if(countT.count(s[l]) && window[s[l]] < countT[s[l]]){
                    have--;
                }
                l++;
            }
        }
        return reslen == INT_MAX ? "" : s.substr(res.first,reslen);
    }
};
