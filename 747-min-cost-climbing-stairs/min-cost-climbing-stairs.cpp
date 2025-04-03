class Solution {
public:
    int ways(int n, vector<int> &cost, vector<int> &dp){
        //base case
        if(n<=1){
            return 0;
        }

        if(dp[n]!=-1){
            return dp[n];
        }

        return dp[n]= min(cost[n-2]+ways(n-2,cost,dp), cost[n-1]+ways(n-1,cost,dp));


    }



    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int> dp(n+1,-1);
        int ans= ways(n,cost,dp);
        return ans;
        
    }
};