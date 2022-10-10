class Solution {
public:
    bool isPalindrome(string s){
        int low=0;
        int last=s.length()-1;
        while(low<=last){
            if(s[low]!=s[last]){
                return false;
            }
            low++;
            last--;
        }
        return true;
    }
    string breakPalindrome(string palindrome) {
         string ans="";
        int n=palindrome.length();
        if(n==1){
            return ans;
        }
        for(int i=0;i<n;i++){
            ans+='z';
        }
        for(char i='a';i<='z';i++){
               
            for(int j=0;j<n;j++){
                string temp=palindrome;
                temp[j]=i;
                if(!isPalindrome(temp)){
                    ans=min(temp,ans);
                }
            }
        }
        return ans;
    }
};