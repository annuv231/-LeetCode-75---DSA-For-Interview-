class Solution {
public:
    int search(vector<int>&arr,int low,int high,int n){
        int mid;
        while(low<=high){
           mid=low+(high-low)/2;
            if(mid==0&&arr[mid]>arr[mid+1]){
            return mid;
            }
             if(mid==n-1&&arr[mid]>arr[mid-1]){
            return mid;
             }
           if(mid>0&&mid<n-1&&arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]){
                 return mid;
        }
        if(arr[mid]<=arr[mid+1]){
          low=mid+1;
        }
        else{
         high=mid-1;
        }
        } 
       
        
        return mid;
    }
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return 0;
        }
        if(nums[0]>nums[1]){
            return 0;
        }
        if(nums[n-1]>nums[n-2]){
            return n-1;
        }
        int ans=search(nums,0,n-1,n);
        return ans;
    }
};