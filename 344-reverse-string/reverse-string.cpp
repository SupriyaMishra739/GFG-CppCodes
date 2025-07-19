class Solution {
public:
    void reverseString(vector<char>& v) {
        stack<char> st;
        for(int i=0;i<v.size();i++){
            st.push(v[i]);
        }        
        int i=0;
        while(!st.empty()){
            v[i]=st.top();
            i++;
            st.pop();

        }
        
    }
};