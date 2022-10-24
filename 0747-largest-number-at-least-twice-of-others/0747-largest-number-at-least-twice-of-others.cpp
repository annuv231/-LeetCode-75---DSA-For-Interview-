class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int first_max=nums[0];
        int second_max=0;
        int idx=0;
        for(int i=1;i<nums.size();i++){
            if(first_max<nums[i]){
                second_max=first_max;
                first_max=nums[i];
                idx=i;
                
            }
            else if(second_max<nums[i]){
                second_max=nums[i];
            }
        }
        cout<<first_max<<":"<<second_max<<endl;
        if(first_max<second_max*2){
            return -1;
        }
        return idx;
    }
};