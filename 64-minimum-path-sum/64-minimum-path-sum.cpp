class Solution {
public:
    
    //topdown
    
    // int ansPath(int m,int n,vector<vector<int>>&grid,vector<vector<int>>&dp){
    //     if(m==0&&n==0){
    //         return dp[0][0]=grid[0][0];
    //     }
    //     if(m<0||n<0){
    //         return 1e9;
    //     }
    //     if(dp[m][n]!=-1){
    //         return dp[m][n];
    //     }
    //     int up=grid[m][n]+ansPath(m-1,n,grid,dp);
    //     int left=grid[m][n]+ansPath(m,n-1,grid,dp);
    //     return dp[m][n]=min(up,left);
    // }
public:
    int minPathSum(vector<vector<int>>& grid) {
        
        int m=grid.size();  //row
        int n=grid[0].size();  //column
        
        vector<vector<int>> dp(m,vector<int>(n,0));
        // return ansPath(m-1,n-1,grid,dp);
        
        // bottom up;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0&&j==0){
                    dp[i][j]=grid[i][j];
                }
                else{
                    int down=0,right=0;
                    if(i>0){
                        down=grid[i][j]+dp[i-1][j];   
                    }
                    else{
                        down=1e9;
                    }
                    if(j>0){
                        right=grid[i][j]+dp[i][j-1];        
                    }
                    else{
                        right=1e9;
                    }
                    dp[i][j]=min(down,right);
                }
            }
        }
        return dp[m-1][n-1];
    }
};