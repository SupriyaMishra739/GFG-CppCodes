class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
            }
            else {
                if(st.empty()) return false; // check before accessing top
                if(s[i] == ')' && st.top() == '(') {
                    st.pop();
                }
                else if(s[i] == '}' && st.top() == '{') {
                    st.pop();
                }
                else if(s[i] == ']' && st.top() == '[') {
                    st.pop();
                }
                else return false; // mismatch
            }
        }
        return st.empty(); // return true if no unmatched brackets left
    }
};
