class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
         unordered_map<int,int> ans;
        set<int> res;
        int flag=nums.size()/3;
        for(auto i:nums)
            {ans[i]++;
            if(ans[i]>flag)res.insert(i);}
        if(res.size()==2)
            return {*res.begin(),*(++res.begin())};
        if(res.size()==1)
        return {*res.begin()};
        return {};
    }
};