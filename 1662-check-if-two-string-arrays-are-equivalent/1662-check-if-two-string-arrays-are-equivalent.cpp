class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1="";
        string s2="";
        // sort(word1.begin(),word1.end());
        // sort(word2.begin(),word2.end());
        for(auto s:word1){
            s1+=s;
        }
        for(auto s:word2){
            s2+=s;
        }
        if(s1==s2){
            return true;
        }
        return false;
        
    }
};