//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Your code here
        int maxi=INT_MIN;
        int n=arr.size();
        int prefix=0;
        
        //KADANE ALGO APPROACH
        
        for(int i=0;i<n;i++){
            
           prefix=prefix+arr[i];
           
            
            maxi=max(maxi,prefix);
             if(prefix<0){
                prefix=0;
            }
        }
        
        return maxi;
        
        
        
        
        
        
        
        
        
        //BRUTE FORCE APPROACH
        // for(int i=0;i<n;i++){
        //     int prefix=0;
            
        //     for(int j=i;j<n;j++){
        //         prefix+=arr[j];
                
        //       maxi=max(prefix,maxi);
                
        //     }
           
        // }
        
        // return maxi;
        
       
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To discard any leftover newline characters
    while (t--)   // while testcases exist
    {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.maxSubarraySum(arr) << endl << "~" << endl;
    }
}
// } Driver Code Ends