//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    // Function to count the number of ways in which frog can reach the top.
    
    int ways(int n, vector<int> &dp){
         if(n==2){
            return 2;
        }
        if(n<=1){
            return 1;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        
        
        return dp[n]=ways(n-1,dp)+ways(n-2,dp)+ways(n-3,dp);
    }
    int countWays(int n) {

        // your code here
        
       vector<int> dp(n+1,-1);
       int ans= ways(n,dp);
       return ans;
       
    }
};



//{ Driver Code Starts.
int main() {
    // taking testcases
    int t;
    cin >> t;

    while (t--) {
        // taking number of steps in stair
        int n;
        cin >> n;
        Solution ob;
        // calling function countWays()
        cout << ob.countWays(n) << endl;

        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends