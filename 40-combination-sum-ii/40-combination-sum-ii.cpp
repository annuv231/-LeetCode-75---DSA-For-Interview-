class Solution {
    public:
    
      void subesequence(vector<int>&arr,vector<vector<int>>&ans,vector<int>&temp,int idx,int target,int n){
      if(target==0){
          ans.push_back(temp);
              return;
         }
        
        //using striver method
        //run for each first index.. dont take if there is same
       for(int i=idx;i<arr.size();i++){
           if(i>idx && arr[i]==arr[i-1]){
               continue;
           }
           if(arr[i]>target){
               break;
           }
           temp.push_back(arr[i]);
           subesequence(arr,ans,temp,i+1,target-arr[i],n);
           temp.pop_back();
           
       }
      }
    
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        int n=candidates.size();
        vector<vector<int>>ans;
        vector<int>temp;
        sort(candidates.begin(),candidates.end());
        subesequence(candidates,ans,temp,0,target,n);
        return ans;
    }
};