class Solution {
public:
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        sort(envelopes.begin(),envelopes.end(),[](const vector<int>& a, const std::vector<int>& b){
            if(a[0]==b[0])return a[1]>b[1];
            return a[0]<b[0];
        });
        for(auto i:envelopes)
        cout<<i[0]<<" "<<i[1]<<endl;
        vector<int> ans;
        for(auto height:envelopes){
            auto it = lower_bound(ans.begin(),ans.end(),height[1]);
            if(it == ans.end())
                ans.push_back(height[1]);
            else
                *it = height[1];
        }
        return ans.size();
    }
};