//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here
        int max=-1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>max){
                max=arr[i];
            }
            
        }
        int secMax=-1;
        
        for(int i=0;i<arr.size();i++){
            if(arr[i]>secMax){
                if(arr[i]!=max){
                   secMax=arr[i];
                }
            }
        }
        return secMax;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends