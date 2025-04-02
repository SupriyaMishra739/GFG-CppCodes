//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        
        // Your Code Here
        int n=arr.size();
         sort(arr.begin(), arr.end()); // Sorting is necessary for two-pointer approach
        
        for(int i=0;i<n-2;i++){
           int newTarget = target - arr[i];
            int start=i+1;
            int end=n-1;
            while(start<end){
                if(newTarget==arr[start]+arr[end]){
                    return true;
                }
                else if(arr[start]+arr[end]>newTarget){
                    end--;
                }
                else {
                    start++;
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
    cin.ignore(); // Ignore newline character after t

    while (t--) {
        vector<int> arr;
        int target;
        string inputLine;

        getline(cin, inputLine); // Read the array input as a line
        stringstream ss(inputLine);
        int value;
        while (ss >> value) {
            arr.push_back(value);
        }

        cin >> target;
        cin.ignore(); // Ignore newline character after target input

        Solution solution;
        bool result = solution.hasTripletSum(arr, target);
        cout << (result ? "true" : "false") << "\n";
    }

    return 0;
}
// } Driver Code Ends