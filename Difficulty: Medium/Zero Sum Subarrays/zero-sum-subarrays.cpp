//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
public:
    int findSubarray(std::vector<int> &arr) {
        int total = 0; // total number of subarrays
        int prefixSum = 0; // prefix sum of the original array

        std::unordered_map<int, int> m;
        // initialize map with (0,1)
        m[0] = 1;
        
        for (int i = 0; i < arr.size(); i++) {
            prefixSum = prefixSum + arr[i]; // Corrected: Sum the elements
            
            if (m.count(prefixSum)) {
                total = total + m[prefixSum]; // Corrected: Add the count
                m[prefixSum]++;
            }
            else {
                m[prefixSum] = 1;
            }
        }
        return total;
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        vector<int> arr;
        while (ss >> num)
            arr.push_back(num);

        Solution ob;
        cout << ob.findSubarray(arr) << endl;
        cout << "~\n";
    }
}

// } Driver Code Ends