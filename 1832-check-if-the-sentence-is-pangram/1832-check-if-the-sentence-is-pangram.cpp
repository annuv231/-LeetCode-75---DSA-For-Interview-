class Solution {
public:
    bool checkIfPangram(string sentence) {
        // set<char>st;
        // for(auto x:sentence){
        //     st.insert(x);
        // }
        // if(st.size()==26){
        //     return true;
        // }
        // return false;
        
        //method 2:
        int str[26]={0};
        for(auto x:sentence){
            str[x-'a']++;
            cout<<"'Hello'";
        }
        for(int i=0;i<26;i++){
            cout<<str[i]<<" ";
            if(str[i]==0){
                return false;
            }
        }
        return true;
    }
};