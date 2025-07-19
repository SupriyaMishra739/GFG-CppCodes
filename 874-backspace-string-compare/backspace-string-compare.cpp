class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> s1, t1;

        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '#') {
                if (!s1.empty()) {
                    s1.pop();
                }
            } else {
                s1.push(s[i]);
            }
        }

        for(int i = 0; i < t.length(); i++) {
            if(t[i] == '#') {
                if (!t1.empty()) {
                    t1.pop();
                }
            } else {
                t1.push(t[i]);
            }
        }

        string s_string = "", t_string = "";

        while(!s1.empty()) {
            s_string = s1.top() + s_string;
            s1.pop();
        }

        while(!t1.empty()) {
            t_string = t1.top() + t_string;
            t1.pop();
        }

        return s_string == t_string;
    }
};
