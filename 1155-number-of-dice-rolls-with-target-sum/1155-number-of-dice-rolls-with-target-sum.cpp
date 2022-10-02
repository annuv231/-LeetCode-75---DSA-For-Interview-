class Solution {
public: 
    int MOD=1e9+7;
    int temp=0;
    int ansSum(int n,int k,int target,vector<vector<int>>&dp){
        if(n==0&&target==0){
            return 1;
        }
        if((n==0&&target!=0)||(n!=0&&target==0)){
            return 0;
        }
        if(n<0||target<0){
            return 0;
        }
        if(dp[n][target]!=-1){
            return dp[n][target];
        }
        int ans=0;
        for(int i=1;i<=k;i++){
                ans=(ans%MOD+ansSum(n-1,k,target-i,dp)%MOD)%MOD;
                // cout<<"ans "<<ans<<endl;
        }
        return dp[n][target]=ans;
    }
public:
    int numRollsToTarget(int n, int k, int target) {
        vector<vector<int>>dp(n+1,vector<int>(target+1,-1));
        return ansSum(n,k,target,dp);
    }
};