class Solution {
    public:
        void subsequence(vector<int>&arr,int idx,int target,vector<vector<int>>&ans,vector<int>&temp,int n){
            if(idx==n){
                if(target==0){
                    ans.push_back(temp);
                  }
                return;
            }
            if(arr[idx]<=target){
                 temp.push_back(arr[idx]);
                target-=arr[idx];
                subsequence(arr,idx,target,ans,temp,n);
                target+=arr[idx];
                 temp.pop_back();
            }
        subsequence(arr,idx+1,target,ans,temp,n);
         
        }
    
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {    
        vector<vector<int>>ans;
        vector<int>temp;
        int n=candidates.size();
        subsequence(candidates,0,target,ans,temp,n);
        
        return ans;
        
    }
};