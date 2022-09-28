class Solution {
    
    //top down
public:
    int ansRobTop(vector<int>&nums,int n,vector<int>&dp){
        if(n==0){
            return dp[n]=nums[n];
        }
        if(n<0){
            return 0;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        int pick=nums[n]+ansRobTop(nums,n-2,dp);
        int notPick=0+ansRobTop(nums,n-1,dp);
        return dp[n]=max(pick,notPick);
    }
    
//bottom up
    int ansRobBottom(vector<int>&nums,int n){
        int dp[n];
        dp[0]=nums[0];
        for(int i=1;i<n;i++){
            int pick=nums[i];
            if(i-2>=0){
                pick+=dp[i-2];
            }
            int notPick=dp[i-1];
            dp[i]=max(pick,notPick);
            
        }
        return dp[n-1];
    }
    //space bottomup optimization
    int ansRobBottomSpace(vector<int>&nums,int n){
        // int dp[n];
        int p1=nums[0];
        int p2=0;
        int curr=p1;
        for(int i=1;i<n;i++){
            int pick=nums[i];
            if(i-2>=0){
                pick+=p2;
            }
            int notPick=p1;
            curr=max(pick,notPick);
            p2=p1;
            p1=curr;
            
        }
        return curr;
    }
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,-1);
        return ansRobBottomSpace(nums,n);
        // return ansRob(nums,n-1,dp);
    }
};