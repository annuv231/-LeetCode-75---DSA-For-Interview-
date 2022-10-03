class Solution {
public:
    int ansPath(int m,int n,vector<vector<int>>&grid,vector<vector<int>>&dp){
        if(m==0&&n==0){
            return dp[0][0]=grid[0][0];
        }
        if(m<0||n<0){
            return 1e9;
        }
        if(dp[m][n]!=-1){
            return dp[m][n];
        }
        int up=grid[m][n]+ansPath(m-1,n,grid,dp);
        int left=grid[m][n]+ansPath(m,n-1,grid,dp);
        return dp[m][n]=min(up,left);
    }
public:
    int minPathSum(vector<vector<int>>& grid) {
        
        int m=grid.size();  //row
        int n=grid[0].size();  //column
        
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return ansPath(m-1,n-1,grid,dp);
    }
};