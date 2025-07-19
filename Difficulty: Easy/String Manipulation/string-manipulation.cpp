// User function Template for C++
class Solution {
  public:
    int removeConsecutiveSame(vector<string>& arr) {
        // Your code goes here
        stack<string> st;
        st.push(arr[0]);
        
        for(int i=1;i<arr.size();i++){
            if(st.top()==arr[i]){
                st.pop();
                continue;
            }
            st.push(arr[i]);
        }
        int count=0;
        while(!st.empty()){
            count++;
            st.pop();
        }
        return count;
    }
};