class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> lower(26,0);
        vector<int> upper(26,0);

        //couting the freq and storing in lower and upper
        for(int i=0;i<s.size();i++){
            if(s[i]>='a'){
                lower[s[i]-'a']++;

            }
            else { //s[i]>='A'
             upper[s[i]-'A']++;
                
            }
        }

        //
        int count=0;
        bool odd=0;
        for(int i=0;i<26;i++){
            if(lower[i]%2==0){ //even character in the lower array
            count=count+lower[i]; //directly add them  to result


            }
            else{  //odd character in the lower array
                count=count+lower[i]-1;
                odd=1;
            }
              if(upper[i]%2==0){ //even character in the lower array
            count=count+upper[i]; //directly add them  to result


            }
            else{  //odd character in the lower array
                count=count+upper[i]-1;
                odd=1;
            }
            
        }
        return count+odd;
        
    }
};