//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int findSubString(string& s) {
        int n = s.size();
        if (n == 0) return 0;

        // Step 1: Find number of unique characters in s
        unordered_set<char> uniqueChars(s.begin(), s.end());
        int totalUnique = uniqueChars.size();

        // Step 2: Sliding window
        vector<int> freq(256, 0);
        int start = 0, minLen = n + 1, count = 0;

        for (int end = 0; end < n; ++end) {
            freq[s[end]]++;
            if (freq[s[end]] == 1) count++;

            // Shrink the window
            while (count == totalUnique) {
                minLen = min(minLen, end - start + 1);

                freq[s[start]]--;
                if (freq[s[start]] == 0) count--;
                start++;
            }
        }

        return minLen;
    }
};

            

//{ Driver Code Starts.
//      Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends