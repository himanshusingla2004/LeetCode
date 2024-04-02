class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans = 0;
        int i=0;
        int n = s.length();
        int curr = 0;
        for(int i=0;i<n;i++){
            curr=0;
            while(i<n && s[i]!=' '){
                curr++;i++;
            }
            if(curr>0)ans = curr;
        }
        return ans;
    }
};