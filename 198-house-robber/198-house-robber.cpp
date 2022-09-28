class Solution {
public:
    int ansRob(vector<int>&nums,int n,vector<int>&dp){
        if(n==0){
            return dp[n]=nums[n];
        }
        if(n<0){
            return 0;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        int pick=nums[n]+ansRob(nums,n-2,dp);
        int notPick=0+ansRob(nums,n-1,dp);
        return dp[n]=max(pick,notPick);
    }
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,-1);
        return ansRob(nums,n-1,dp);
    }
};