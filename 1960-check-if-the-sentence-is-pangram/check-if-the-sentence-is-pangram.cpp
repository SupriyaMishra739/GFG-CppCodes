class Solution {
public:
    bool checkIfPangram(string sentence) {

        unordered_set<char> unSet;

        for(char ch='a';ch<='z';ch++){
            unSet.insert(ch);
        }

        for(char ch:sentence){
            if(unSet.count(ch)){
                unSet.erase(ch);
            }
        }
       return unSet.empty();
        
    }
};