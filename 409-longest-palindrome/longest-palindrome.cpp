class Solution {
public:
    int longestPalindrome(string word) {
        unordered_map<char, int> unMap;
        for (char ch : word) {
            unMap[ch]++;
        }

        int res = 0;
        bool oddFound = false;

        for (auto it : unMap) {
            if (it.second % 2 == 0) {
                res += it.second;
            } else {
                res += it.second - 1;
                oddFound = true;
            }
        }

        if (oddFound) {
            return res + 1;
        }

        return res;
    }
};
