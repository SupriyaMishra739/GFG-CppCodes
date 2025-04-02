class Solution {
public:


    //Top down approach

    // int fibo(int n, vector<int> &dp){

    //     if(n<=1){
    //         return n;
    //     }
    //     if(dp[n]!=-1){
    //         return dp[n];
    //     }
    //     return dp[n]= fibo(n-1,dp)+fibo(n-2,dp);


    // }
    // int fib(int n) {


    //     vector<int> dp(n+1,-1);
    //    int ans= fibo(n,dp);
    //    return ans;


        
    // }


    //Bottom up approach
    // int fib(int n) {
    //     if(n<=1){
    //         return n;
    //     }

    //     vector<int> dp(n+1,-1);
    //     dp[0]=0;
    //     dp[1]=1;
    //   for(int i=2;i<=n;i++){
    //     dp[i]=dp[i-1]+dp[i-2];

    //   }
    //    return dp[n];


        
    // }

    //optimized approach ->using only 3 variables
      int fib(int n) {
        if(n<=1){
            return n;
        }
       

        int prev2=0, prev=1, curr;

        for(int i=2;i<=n;i++){
            curr=prev2+prev;
            prev2=prev;
            prev=curr;
        }
        return curr;


        
    }





   
};