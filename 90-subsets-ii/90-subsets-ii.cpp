class Solution {
public:
    void ansSub(vector<int>&arr,vector<vector<int>>&ans,vector<int>&temp,int idx,int n){
        ans.push_back(temp);
        for(int i=idx;i<n;i++){
            if(i>idx && arr[i]==arr[i-1]){
                continue;
            }
            temp.push_back(arr[i]);
            ansSub(arr,ans,temp,i+1,n);
            temp.pop_back();
        }
        return;
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>temp;
        int n=nums.size();
        ansSub(nums,ans,temp,0,n);
        return ans;
    }
};