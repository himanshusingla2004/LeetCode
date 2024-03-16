class Solution {
public:
    vector<int> platesBetweenCandles(string s, vector<vector<int>>& queries) {
        vector<int> ans,A;
        for(int i=0;i<s.size();i++)
            if(s[i]=='|')A.push_back(i);
        for(int i=0;i<queries.size();i++){
            int l = lower_bound(A.begin(),A.end(),queries[i][0])-A.begin();
            int r = upper_bound(A.begin(),A.end(),queries[i][1])-A.begin()-1;
            cout<<l<<" "<<r<<endl;
            ans.push_back(l<r ? A[r]-A[l] - (r-l) : 0) ;
        }
        return ans;
    }
};