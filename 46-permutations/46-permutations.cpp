class Solution {
    //Method 2:
// public:
//     void ansPermute(vector<int>&arr,vector<vector<int>>&ans,vector<int>&temp,vector<int>track,int idx ,int n){
//             if(temp.size()==n){
//                 ans.push_back(temp);
//             return;
//             }
//         for(int i=0;i<n;i++){
//             if(!track[i]){
//             temp.push_back(arr[i]);
//             track[i]=1;
//             ansPermute(arr,ans,temp,track,i+1,n);
//             track[i]=0;
//             temp.pop_back();
//             }
//         }
//     }
public:
    void ansPermute(vector<int>&arr,vector<vector<int>>&ans,int idx ){
        if(idx==arr.size()){
            ans.push_back(arr);
            return;
        }
        for(int i=idx;i<arr.size();i++){
            swap(arr[i],arr[idx]);
            ansPermute(arr,ans,idx+1);
            swap(arr[i],arr[idx]);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        int n=nums.size();
        vector<int>track(n,0);
        ansPermute(nums,ans,0);
        
        return ans;
    }
};