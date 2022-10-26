class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        
        //brute force:
        
        // for(int i=0;i<nums.size();i++){
        //     int sum=nums[i];
        //     for(int j=i+1;i<nums.size();j++){
        //         if(j>=nums.size()){
        //             break;
        //         }
        //         sum+=nums[j];
        //         if(sum%k==0){
        //             return true;
        //         }
        //     }
        // }
        // return false;
        
        //optimal solution: 
        unordered_map<int,int>mp;
        int prefix=0;
        for(int i=0;i<nums.size();i++){
            prefix=prefix+nums[i];
            int find=prefix%k;
             cout<<find<<" ";
            if(find==0&&i!=0){
                return true;
            }
            if(mp.find(find)!=mp.end()){
                if(i-mp[find]>=2){
                    return true;
                }
            }
            else{
               mp[find]=i;
            }
        }
        cout<<endl;
        for(auto [k,v]: mp){
            cout<<k<<": "<<v<<endl;
        }
        return false;
    }
};