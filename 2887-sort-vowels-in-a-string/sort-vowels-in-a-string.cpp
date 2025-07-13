class Solution {
public:
    string sortVowels(string s) {
        vector<char> v;
        for(int i=0;i<s.length();i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
         
                v.push_back(s[i]);
                       s[i]='#';

            }
        }

        sort(v.begin(),v.end());
        for(int i=0;i<s.length();i++){
            if(s[i]=='#'){
                s[i]=v.front();
                v.erase(v.begin());

            }
        }
        return s;


        
    }
};