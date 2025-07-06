class Solution {
  public:
    // Function to reverse words in a given string.
    string reverseWords(string &s) {
        istringstream iss(s);
        string word;
        vector<string> words;

        // Split string by spaces and skip extra spaces
        while (iss >> word) {
            words.push_back(word);
        }

        // Reverse the order of words
        reverse(words.begin(), words.end());

        // Join the words with a single space
        string result;
        for (int i = 0; i < words.size(); ++i) {
            result += words[i];
            if (i != words.size() - 1)
                result += " ";
        }

        return result;
    }
};
