class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int first=0;
        int second=0;
        vector<bool> count(256,0);
        int len=0;

        while(second<s.size()){
            //if repeating character found, start making 0  from first till  you reach the second and make that 0 also

            while(count[s[second]]==1){

                count[s[first]]=0;
                first++;
            }
            count[s[second]]=1;
            len=max(len,second-first+1);
            second++;

        }

        return len;
        
    }

};