class Solution {
    int ans(int m,int n,vector<vector<int>>&dp){
        if(m==0&&n==0){
            return dp[m][n]=1;
        }
        if(m<0||n<0){
            return 0;
        }
        if(dp[m][n]!=-1){
            return dp[m][n];
        }
        
        int left=ans(m-1,n,dp);
        int up=ans(m,n-1,dp);
        return dp[m][n]=left+up;
    }
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return ans(m-1,n-1,dp);
    }
};