// User function template for C++
class Solution {
  public:

    vector<int> bracketNumbers(string str) {
        // Your code goes here
        stack<int> st;
        vector<int> res;
        int count=0;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]=='(')
            {
                count++;
             
                st.push(count);
                   res.push_back(count);
                
            }
            else if(str[i]==')')
            {
                 res.push_back(st.top()); // ✅ fix here
                st.pop();
                
            }
            
        }
      
        return res;
        
    }
};