class Solution {
public:
    bool checkIfPangram(string sentence) {

        vector<bool> alphabet(26,false);
        int count=0; //count of unique characters

        for(int i=0;i<sentence.size();i++){
            int index= sentence[i]-'a';
             if (alphabet[index]==false) { // If this letter is encountered for the first time
                alphabet[index] = true;
                count++;  // Increment the count of unique letters
            }
            if (count == 26) return true;

        }

         return count == 26;


        
    }
};