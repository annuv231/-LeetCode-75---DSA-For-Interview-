class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=n-1;i>=2;i--){
             int c=nums[i-1];
             int b=nums[i-2];
             int a=nums[i];
            if(a+b>c&&b+c>a&&c+a>b){
                return a+b+c;
            }
        }
        return 0;
    }
};