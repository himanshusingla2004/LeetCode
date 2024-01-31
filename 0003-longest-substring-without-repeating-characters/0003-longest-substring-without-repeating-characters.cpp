class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> ch;
        int i=0,j=0,maxlen=0;
       int n = s.size();
            while(j<n && i<n){
                if(ch.find(s[j]) == ch.end()){
                    ch.insert(s[j++]);
                    maxlen = max(maxlen,j-i);
                }
                else{
                    ch.erase(s[i]);
                    i++;
                }
            }
        return maxlen;
        
    }      
};