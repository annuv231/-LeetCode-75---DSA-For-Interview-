class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n=nums.size();
        if(n==1){
            return false;
        }
        
        map<int,int>mp;
        for(int i=0;i<k;i++){
            if(i==n){
                break;
            }
             mp[nums[i]]++;  
        }
        for(auto [k,v]: mp){
             if(v>1){
                 return true;
             }
        }
        int beg=0;
        int cur=k;
        for(int i=k;i<n;i++){
            if(mp[nums[i]]==1){
                return true;
            }
            else{
                mp[nums[beg]]--;
                beg++;
                mp[nums[i]]++;
            }
        }
        return false;
    }
};