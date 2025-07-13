class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char, int> freq;

        for (char ch : s) {
            freq[ch]++;
        }

        string res = "";

        // First: Add characters according to 'order'
        for (char ch : order) {
            if (freq.count(ch)) {
                res += string(freq[ch], ch);
                freq.erase(ch);
            }
        }

        // Second: Add remaining characters not in 'order'
        for (auto it : freq) {
            res += string(it.second, it.first);
        }

        return res;
    }
};
