class Solution {
public:
    int dominantIndex(vector<int>& num) {
        vector<int>nums=num;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if((nums[n-1])<nums[n-2]*2){
            return -1;
        }
        for(int i=0;i<n;i++){
            if(nums[n-1]==num[i]){
                return i;
            }
        }
        return 0;
    }
};