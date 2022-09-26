class Solution {
public:
    int tribonacci(int n) {
        int t0=0;
        int t1=1;
        int t2=1;
        if(n<2){
            return n;
        }
        if(n==2){
            return 1;
        }
        
        int ans;
        for(int i=3;i<=n;i++){
            ans=t0+t1+t2;
            t0=t1;
            t1=t2;
            t2=ans;
        }
        return ans;
    }
};