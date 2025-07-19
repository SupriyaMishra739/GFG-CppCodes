class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        // code here
        
        vector<bool> v(256,0);
        int first=0;
        int second=0;
        int len=0;
        
        while(second<s.length()){
            
            while(v[s[second]]==1){
                v[s[first]]=0;
                
                first++;
            }
              v[s[second]]=1;
            len=max(len,second-first+1);            
            second++;
        }
        return len;
    }
};
