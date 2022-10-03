class Solution {
public:
    int ansPath(int m,int n,vector<vector<int>>&grid, vector<vector<int>>&dp){
        if(m==0&&n==0&&grid[0][0]==0){
            return dp[m][n]=1;
        }
        if(m<0||n<0){
            return 0;
        }
        if(grid[m][n]==1){
          return 0;
        }
        if(dp[m][n]!=-1){
            return dp[m][n];
        }
        int top=ansPath(m-1,n,grid,dp);
        int left=ansPath(m,n-1,grid,dp);
        
        
        return dp[m][n]=top+left;
    }
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
       
        int n=obstacleGrid[0].size(); //column
        int m=obstacleGrid.size(); //row
        cout<<m<<" "<<n<<endl;
         vector<vector<int>>dp(m,vector<int>(n,-1));
       return ansPath(m-1,n-1,obstacleGrid,dp);
    }
};