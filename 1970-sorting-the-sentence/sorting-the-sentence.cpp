class Solution {
public:
    string sortSentence(string s) {
        vector<string> ans(10); // Array to store words based on their position
        string temp;
        int count = 0; 

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                int pos = temp.back() - '0'; // Get position from last character
                temp.pop_back(); // Remove position number from word
                ans[pos] = temp; // Store word at its position
                count++; // Increase word count
                temp = ""; // Reset temp for next word
            } else {
                temp += s[i]; // Append character to temp
            }
        }
        
        // Store the last word
        int pos = temp.back() - '0';
        temp.pop_back();
        ans[pos] = temp;
        count++;

        // Construct final sorted sentence
        string result;
        for (int i = 1; i <= count; i++) {
            result += ans[i] + " ";
        }
        result.pop_back(); // Remove trailing space

        return result;
    }
};
