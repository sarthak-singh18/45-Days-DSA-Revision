class Solution {
public:
// int c(int n,vector<int>& dp){
    // if(n<=2) return n;
    // if(dp[n]!=-1) return dp[n];
    // return dp[n]=c(n-1,dp)+c(n-2,dp);
// }
    int climbStairs(int n) {
        
        // vector<int>dp(n+1,-1);
        
        // return c(n,dp);
        if(n<=2) return n;
        vector<int>dp(n+1,-1);
        dp[1]=1;
        dp[2]=2;
        for(int i=3;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }

        return dp[n];
        
    }
};