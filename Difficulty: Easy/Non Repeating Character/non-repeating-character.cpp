//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    char nonRepeatingChar(string &s) {
        unordered_map<char, int> m;

        // Count frequency of each character
        for (char c : s) {
            m[c]++;
        }

        // Return the first character with count 1
        for (char c : s) {
            if (m[c] == 1) {
                return c;
            }
        }

        // If no non-repeating character is found
        return '$';
    }
};



//{ Driver Code Starts.

int main() {

    int T;
    cin >> T;

    while (T--) {

        string S;
        cin >> S;
        Solution obj;
        char ans = obj.nonRepeatingChar(S);

        if (ans != '$')
            cout << ans;
        else
            cout << "-1";

        cout << endl;

        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends