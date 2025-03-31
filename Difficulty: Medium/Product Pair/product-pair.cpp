//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    bool isProduct(vector<int> arr, long long product) {
        // code here
        
        sort(arr.begin(), arr.end());
        int n = arr.size();
        
        // Handle product zero case
        if (product == 0) {
            for (int num : arr) {
                if (num == 0) return true;
            }
            return false;
        }
        
        // Check for pairs
        for (int i = 0; i < n; ++i) {
            if (arr[i] == 0) continue; // Avoid division by zero
            long long target = product / arr[i];
            if (product % arr[i] != 0) continue; // Skip if not divisible
            
            // Binary search for target
            int left = 0, right = n - 1;
            while (left <= right) {
                int mid = left + (right - left) / 2;
                if (arr[mid] == target) {
                    // Ensure it's not the same element unless allowed (e.g., arr[i] * arr[i] == product)
                    if (mid != i || (mid == i && mid + 1 < n && arr[mid + 1] == target)) {
                        return true;
                    }
                    break;
                } else if (arr[mid] < target) {
                    left = mid + 1;
                } else {
                    right = mid - 1;
                }
            }
        }
        return false;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To discard any leftover newline characters
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        long long x;
        cin >> x;
        cin.ignore(); // To discard any leftover newline characters

        Solution ob;
        auto ans = ob.isProduct(arr, x);
        cout << (ans ? "true\n" : "false\n");
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends