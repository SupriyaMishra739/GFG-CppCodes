class Solution {
public:
    string sortSentence(string sentence) {
        vector<string> v(10);

        istringstream iss(sentence);
        string word="";
        while(iss>>word){
              int lastint = word.back()-'0'; //converted the last char to int ans stored its value

        word.pop_back(); //remove the last int from word

        v[lastint]=word;



        }
    
    
       string res = "";
        for (string word : v) {
            if (!word.empty()) {             // ✅ skip unused positions
                res += word;
                res += ' ';
            }
        }

        if (!res.empty()) {
            res.pop_back(); // remove trailing space
        }

        return res;
    }
};