class Solution {
    
//     //top down 100% faster
//     int ans(int m,int n,vector<vector<int>>&dp){
//         if(m==0&&n==0){
//             return dp[m][n]=1;
//         }
//         if(m<0||n<0){
//             return 0;
//         }
//         if(dp[m][n]!=-1){
//             return dp[m][n];
//         }
        
//         int left=ans(m-1,n,dp);
//         int up=ans(m,n-1,dp);
//         return dp[m][n]=left+up;
//     }
public:
    int uniquePaths(int m, int n) {
        
        // return ans(m-1,n-1,dp);
        
        
        
        //bottom up apprach
       int dp[m][n];
       
       for(int i=0;i<m;i++){
           for(int j=0;j<n;j++){
               if(i==0&&j==0){
                   dp[0][0]=1;
               }
               else{
                   int right=0,down=0;
                   if(i>0){
                    right=dp[i-1][j];
               }
               if(j>0){
                     down=dp[i][j-1];
               }
                   dp[i][j]=down+right;
               }
               
               
                 
           }
       }
        return dp[m-1][n-1];
    }
};