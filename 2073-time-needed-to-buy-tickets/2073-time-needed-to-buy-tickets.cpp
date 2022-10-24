class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int num=tickets[k];
        num--;
        int ans=0;
        for(int i=0;i<tickets.size();i++){
            if(tickets[i]<num){
                ans+=tickets[i];
                tickets[i]=0;
            }
            else{
                ans+=num;
                tickets[i]=tickets[i]-num;
            }
        }
        for(int i=0;i<=k;i++){
            if(tickets[i]>0){
                ans++;
            }
        }
        return ans;
    }
};