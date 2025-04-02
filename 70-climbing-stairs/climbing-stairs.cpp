class Solution {
public:

// //Top down approach

//     int count(int i, int n,vector<int> &dp){
//         //base case
//         if(n==i){
//             return 1;
//         }
//         if(i>n){
//             return 0;
//         }
//         if(dp[i]!=-1)
//         {
//             return dp[i];
//         }

//         return dp[i]=count(i+1,n,dp)+count(i+2,n,dp);

//     }


//     int climbStairs(int n) {
//         //create a dp array

//         vector<int> dp(n+2,-1);
//       int ans=  count(0,n,dp);

//       return ans;



        
//     }


//Bottom up approach
        int climbStairs(int n) {
        //create a dp array
        

        vector<int> dp(n+2,-1);
        dp[n]=1;
        dp[n+1]=0;
        //start traversing from end

        for(int i=n-1;i>=0;i--){
            dp[i]=dp[i+1]+dp[i+2];
        }
        return dp[0];
     

      



        
    }


};