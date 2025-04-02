//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

bool find4Numbers(int A[], int n, int X);

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, i, x;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cin>>x;
        cout << find4Numbers(a, n, x) << endl;

    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends


//User function Template for C++

bool find4Numbers(int arr[], int n, int X)  
{
    sort(arr, arr + n);
   
    
    for(int j=0;j<n-3;j++){
        //3 sum
        
        for(int i=j+1;i<n-2;i++ ){
            int newTarget= X-arr[i]-arr[j];
            int start=i+1;
            int end=n-1;
            
            while(start<end){
                if(newTarget==arr[start]+arr[end]){
                    return true;
                }
                else if(arr[start]+arr[end]> newTarget){
                    end--;
                }
                else {
                    start++;
                }
            }
            
        }
  
    }
          return false;
    
}