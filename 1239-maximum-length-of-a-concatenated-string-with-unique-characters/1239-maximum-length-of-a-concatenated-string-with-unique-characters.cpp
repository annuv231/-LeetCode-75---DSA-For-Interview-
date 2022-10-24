class Solution {
public:
    bool valid(string &s)
    {
        vector<int> v(26,0);
        for(int i=0;i<s.size();i++)
        {
            if(v[s[i]-'a']==1)
            {
                return false;
            }
            v[s[i]-'a']++;
        }
        return true;
    }
    void ansLength(vector<string>arr,int idx,int n ,int &ans,string s){
        if(!valid(s)){
            return; 
        }
        ans=ans>s.length()? ans:s.size();
        if(idx>=n){
             cout<<s<<"s size"<<s.size()<<endl;
            return;
        } 
        ansLength(arr,idx+1,n,ans,s+arr[idx]);
        ansLength(arr,idx+1,n,ans,s);
    }
public:
    int maxLength(vector<string>& arr) {
        int n=arr.size();
        int ans=0;
        string s="";
        ansLength(arr,0,n,ans,s);
        return ans;
    }
};