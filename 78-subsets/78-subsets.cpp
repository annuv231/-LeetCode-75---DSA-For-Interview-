class Solution {
    public:
     void ansSub(vector<int>&arr,vector<vector<int>>&ans,vector<int>&temp,int idx,int n){
    if(idx==n){
      ans.push_back(temp);
        return;
    }
    
    temp.push_back(arr[idx]);
    ansSub(arr,ans,temp,idx+1,n);
    temp.pop_back();
    ansSub(arr,ans,temp,idx+1,n);
         return;
     }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>>ans;
        vector<int>temp;
         ansSub(nums,ans,temp,0,n);
        
        return ans;
    }
};