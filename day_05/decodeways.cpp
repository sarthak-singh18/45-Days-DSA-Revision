class Solution {
public:
    int x(string s,int i,int n,vector<int>&dp){
        if(i==n) return 1;
        if(s[i]=='0') return 0;

        if(dp[i]!=-1) return dp[i];
        int ways=x(s,i+1,n,dp);
        
         if (i + 1 < n) {
            int num = (s[i] - '0') * 10 + (s[i + 1] - '0');
            if (num >= 10 && num <= 26)
                ways += x(s,i+2,n,dp);
        }

        return dp[i]=ways;


    }
    int numDecodings(string s) {

        int n=s.size();
        int i=0;
        vector<int>dp(n+1,-1);
        return x(s,i,n,dp);
    }
};