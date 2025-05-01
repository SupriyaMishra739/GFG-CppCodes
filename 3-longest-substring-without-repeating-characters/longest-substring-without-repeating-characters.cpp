class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int len=0;
        //first and second are pointers pointing to 0th index of the string initially
        int first=0;
        int second=0;

        vector<bool> count(256,0); //boolean array of size 256, for thr 256 possible ascii sybol initialzied with 0

        while(second<s.size())
        {
            while(count[s[second]]==1){
                count[s[first]]=0;
                first++;
            }
            count[s[second]]=1;

            len=max(len, second-first+1);
            second++;
        }
        return len;

        
    }
};