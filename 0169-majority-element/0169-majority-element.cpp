class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> ans;
        int flag=nums.size()/2;
        for(auto i:nums)
            {ans[i]++;
            if(ans[i]>flag)return i;}
        // for(auto i:ans){
        //     if(i.second>flag)
        //         return i.first;
        // }
        return 1;
    }
};