class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int size=nums.size();
        vector<int>ans(nums.size());
        ans[0]=nums[0];
        for(int i=1;i<size;i++){
           nums[i]=nums[i-1]+nums[i];
        }
         return nums;
    

    }
   
};