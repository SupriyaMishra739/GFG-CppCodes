class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
          int count=0;

        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                st.push(s[i]);
            }
            else if(s[i]==')'){
                if(!st.empty() &&st.top()=='('){
                    st.pop();
                    continue;
                }
                count++;
              
            }
        }
        if(count==0 && st.empty()){ //balanced string given
            return 0;
        }
        else if(count!=0 && st.empty()){// ')' brackets were more so mismatched and we are returning their count
            return count;
        }
        else {  // '(' brackets were more and they are in stack->so we will return their count
            while(!st.empty()){ // 
                count++;
                st.pop();
                
            }
            return count;
        }
        
    }
};