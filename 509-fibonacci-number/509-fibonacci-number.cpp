//method 1: 
// class Solution {    
// public:
//   
//     int fib(int n) {
//         if(n==0||n==1){
//         return n;
//         }
//         return fib(n-1)+fib(n-2);
//     }
// };
class Solution {
    
public:
    int dpFib(int n, vector<int>&dp){
        if(n==0||n==1){
            dp[n]=n;
            return n;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        else return dp[n]=dpFib(n-1,dp)+dpFib(n-2,dp);
    }
    int fib(int n) {
        vector<int>dp(n+1,-1);
        dpFib(n,dp);
        return dp[n];
    }
};