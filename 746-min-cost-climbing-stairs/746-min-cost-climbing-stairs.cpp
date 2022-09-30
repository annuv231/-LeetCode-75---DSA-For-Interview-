class Solution {
public:
    int ansCost(vector<int>&nums,int n,vector<int>&dp){
        if(n==0){
            return dp[n]=nums[0];
          }
        if(n<0){
            return 0;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        int oneStep=nums[n]+ansCost(nums,n-1,dp);
        
        int twoStep=nums[n]+ansCost(nums,n-2,dp);
        return dp[n]=min(oneStep,twoStep);
    }
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int>dp(n,-1);
        n--;
        vector<int>cost2;
        for(int i=0;i<n;i++){
           cost2.push_back(cost[i]);
        }
         for(int i=0;i<n;i++){
           cout<<cost2[i]<<" ";
        }
        cout<<n<<endl;
        // cout<<ansCost(cost,n)<<" "<<ansCost(cost2,n-1)<<endl;
        return min(ansCost(cost,n,dp),ansCost(cost2,n-1,dp));
    }
};