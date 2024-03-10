class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        unordered_map<int,int> mp;
        vector<int> ans;
        for(auto i:nums)
            for(auto j:i)
                mp[j]++;
        for(auto [i,j]:mp)
            if(j==nums.size())ans.push_back(i);
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};