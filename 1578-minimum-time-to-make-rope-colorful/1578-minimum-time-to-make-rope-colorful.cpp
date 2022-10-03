class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        char curr=colors[0];
        int cost=neededTime[0];
        int ans=0;
        for(int i=1;i<colors.length();i++){
            if(curr==colors[i]){
                 if(cost<=neededTime[i]){
                    ans+=cost;
                    cost=neededTime[i];
                    curr=colors[i];
                 }
                else{
                    ans+=neededTime[i];
                    
                }
            }
            else{
                curr=colors[i];
                cost=neededTime[i];
            }
               
        }
        return ans;
    }
};
