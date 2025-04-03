class Solution {
public:
    //Top Down Approach


    // int ways(int n, vector<int> &cost, vector<int> &dp){
    //     //base case
    //     if(n<=1){
    //         return 0;
    //     }

    //     if(dp[n]!=-1){
    //         return dp[n];
    //     }

    //     return dp[n]= min(cost[n-2]+ways(n-2,cost,dp), cost[n-1]+ways(n-1,cost,dp));


    // }



    // int minCostClimbingStairs(vector<int>& cost) {
    //     int n=cost.size();
    //     vector<int> dp(n+1,-1);
    //     int ans= ways(n,cost,dp);
    //     return ans;
        
    // }


    //Bottom Up Approach

        int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int> dp(n+1,-1);
        dp[0]=0;
        dp[1]=0;

        for(int i=2;i<=n;i++)
        {
          dp[i]= min(cost[i-2]+dp[i-2], cost[i-1]+ dp[i-1]);
        }
        return dp[n];
        
    }


};