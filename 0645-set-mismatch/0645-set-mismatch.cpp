class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        //get the size of array
        vector<int>ans;
        int n=nums.size();
        int act_sum=(n*(n+1))/2;
        int cur_sum=0;
         unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            cur_sum+=nums[i];
            mp[nums[i]]++;
        }
        int num1;
        for(auto [k,v]: mp){
           cout<<k<<":"<<v<<endl;
            if(v==2){
                num1=k;
                cout<<num1;
                break;
            }
        }
        // cout<<num1<<endl;
        int dif=act_sum-cur_sum;
       return ans={num1,dif+num1};
    }
};