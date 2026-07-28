class Solution {
public:
    bool isValidChar(char ch){
        int ch_int = ch - '0';
        if((ch >= 'A' && ch <= 'z') || (ch_int >= 0 && ch_int <= 9)) return true;
        return false;
    }
    bool isPalindrome(string s) {
        int i = 0, j = s.size()-1;

        while(i <= j){
            if(!isValidChar(s[i])){
                i++;
                continue;
            }
            if(!isValidChar(s[j])){
                j--;
                continue;
            }
            if(isValidChar(s[i]) && isValidChar(s[j]) && (tolower(s[i]) != tolower(s[j]))){
                // cout<<s[i] <<" "<<s[j];
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
