
class Solution {
  public:
    int climb(int n,vector<int> & dp){
        if(n==1 || n==2) return n;
        if(n==3) return 4;
        
        if(dp[n]!=-1){
            return dp[n];
        }
        return dp[n]=climb(n-1,dp)+climb(n-2,dp)+climb(n-3,dp);
    }
    int countWays(int n) {
        vector<int> dp(n+1,-1);
        return climb(n,dp);        // your code here
        // if(n==1 || n==1 || n==2) return n;
        // if(n==3) return 4;
        
        // return countWays(n-1)+countWays(n-2)+countWays(n-3);
    }
};
