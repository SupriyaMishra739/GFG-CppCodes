//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    int binarysearch(vector<int> &arr, int key) {
        // code here
        
        int start=0;
        int end=arr.size()-1;
        int mid;
         int result = -1;
        while(start<=end){
           mid = start + (end - start) / 2;
            
            if(arr[mid]==key){
                result=mid;
              end = mid - 1; 
                
                
            }
            else if(arr[mid]>key ){
                end=mid-1;
                
            }
            else{
                start=mid+1;
                
            }
            
        }
          return result;  // Key not found
        
        
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        vector<int> arr;
        string input;
        cin.ignore();
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int res = ob.binarysearch(arr, k);
        cout << res << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends