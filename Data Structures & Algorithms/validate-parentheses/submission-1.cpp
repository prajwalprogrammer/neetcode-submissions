class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(char ch : s){
            if(ch == '{' || ch == '(' || ch == '['){
                st.push(ch);
            }else{
                if(st.size() <= 0) return false;
                char topChar = st.top();
                if(ch == ']' && topChar == '[') st.pop();
                else if(ch == '}' && topChar == '{') st.pop();
                else if(ch == ')' && topChar == '(') st.pop();
                else return false;
            }
        }
        if(st.size() != 0) return false;
        return true;
    }
};
