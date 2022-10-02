class Solution {
public: 
    int MOD=1e9+7;
    // int ansSum(int n,int k,int target,vector<vector<int>>dp){
    //     if(n==0&&target==0){
    //         return 1;
    //     }
    //     if((n==0&&target!=0)||(n!=0&&target==0)){
    //         return 0;
    //     }
    //     if(n<0||target<0){
    //         return 0;
    //     }
    //     if(dp[n][target]!=-1){
    //         return dp[n][target];
    //     }
    //     int ans=0;
    //     for(int i=1;i<=k;i++){
    //             ans=ans+ansSum(n-1,k,target-i,dp)%MOD;
    //             // cout<<"ans "<<ans<<endl;
    //     }
    //     return dp[n][target]=ans;
    // }
public:
    int numRollsToTarget(int n, int k, int target) {
        vector<vector<int>>dp(n+1,vector<int>(target+1,0));
        // return ansSum(n,k,target,dp);
            int MOD=1e9+7;
        //bottom up approach
        dp[0][0]=1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=target;j++){
                int ans=0;
                for(int f=1;f<=k;f++){
                       if(j-f>=0){
                          ans=(ans+dp[i-1][j-f])%MOD; 
                       }
                       
                        // cout<<"ans "<<ans<<endl;
                }
                dp[i][j]=ans;
            }
        }
        return dp[n][target];
    }
};