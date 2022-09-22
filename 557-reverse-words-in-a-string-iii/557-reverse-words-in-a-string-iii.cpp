class Solution {
public:
    string reverseWords(string s) {
        // reverse(s.begin(),s.end());
        // return s;
        // string ans="";
        // string temp="";
        // for(int i=0;i<s.length();i++){
        //     if(s[i]==' '){
        //         reverse(temp.begin(),temp.end());
        //         ans+=temp;
        //         ans+=' ';
        //         temp="";
        //     }
        //     else temp=temp+s[i];
        // }
        // reverse(temp.begin(),temp.end());
        // ans+=temp;
        
        
        //method 2: inplace:
        
        int i=0;
        for(int j=0;j<s.length();j++){
            if(s[j]==' '){
              reverse(s.begin()+i,s.begin()+j);
                i=j+1;
            }
        }
        reverse(s.begin()+i,s.end());
        return s;
    }
};