class Solution {
public:
    string t;

    int solve(int l,int r){
        int ans = 0;
        while(l>=0 && r<t.size()){
            if(t[l--] == t[r++])
                ans++; 
            else break;
        }
        return ans;
    }
    int countSubstrings(string s) {
        int n = s.size(),ans=0;
        t=s;
        for(int i=0;i<n;i++){
            ans += solve(i,i);
            ans += solve(i,i+1);
        }
        return ans;
    }
};