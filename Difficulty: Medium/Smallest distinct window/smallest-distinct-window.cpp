//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
public:
    int findSubString(const string& s) {  // Use 'const string& s' for safety
        int first = 0, second = 0, len = s.size(), diff = 0;
        vector<int> count(256, 0);
        
        // Calculate the number of distinct characters
        while (first < s.size()) {
            if (count[s[first]] == 0) {
                diff++;
            }
            count[s[first]]++;
            first++;
        }
        
        // Reset count array
        for (int i = 0; i < 256; i++) {
            count[i] = 0;
        }
        
        first = 0;
        second = 0;
        int min_len = s.size();
        int current_diff = 0;
        
        while (second < s.size()) {
            // Expand the window until all distinct characters are included
            if (count[s[second]] == 0) {
                current_diff++;
            }
            count[s[second]]++;
            second++;
            
            // Once all distinct characters are included, try to shrink the window from the left
            while (current_diff == diff) {
                min_len = min(min_len, second - first);
                count[s[first]]--;
                if (count[s[first]] == 0) {
                    current_diff--;
                }
                first++;
            }
        }
        
        return min_len;
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