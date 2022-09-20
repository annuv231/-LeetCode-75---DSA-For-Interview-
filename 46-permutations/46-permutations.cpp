class Solution {
public:
    void ansPermute(vector<int>&arr,vector<vector<int>>&ans,vector<int>&temp,vector<int>track,int idx ,int n){
            if(temp.size()==n){
                ans.push_back(temp);
            return;
            }
        for(int i=0;i<n;i++){
            if(!track[i]){
            temp.push_back(arr[i]);
            track[i]=1;
            ansPermute(arr,ans,temp,track,i+1,n);
            track[i]=0;
            temp.pop_back();
            }
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        int n=nums.size();
        vector<int>track(n,0);
        ansPermute(nums,ans,temp,track,0,n);
        
        return ans;
    }
};