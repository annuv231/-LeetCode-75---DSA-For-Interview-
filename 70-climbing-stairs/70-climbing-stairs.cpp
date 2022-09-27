class Solution {
public:
    int ansStairs(vector<int>&dp,int n){
          if(n==0||n==1){
            dp[n]=1;
            return dp[n];
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        return dp[n]=ansStairs(dp,n-1)+ansStairs(dp,n-2);
    }
public:
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
         ansStairs(dp,n);
        return dp[n];
       
    }
};