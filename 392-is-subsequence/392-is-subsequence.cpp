class Solution {
public:
    bool isSubsequence(string s, string t) {
        //using two pointer technique
        
        int i=0;
        for(int k=0;k<t.length();k++){
            if(t[k]==s[i]){
               // cout<<s[i] <<"found at" <<t[k]<<endl;
              i++;
                
            }
        }
        if(i==s.length()){
return true;}
    return false;
    }
};