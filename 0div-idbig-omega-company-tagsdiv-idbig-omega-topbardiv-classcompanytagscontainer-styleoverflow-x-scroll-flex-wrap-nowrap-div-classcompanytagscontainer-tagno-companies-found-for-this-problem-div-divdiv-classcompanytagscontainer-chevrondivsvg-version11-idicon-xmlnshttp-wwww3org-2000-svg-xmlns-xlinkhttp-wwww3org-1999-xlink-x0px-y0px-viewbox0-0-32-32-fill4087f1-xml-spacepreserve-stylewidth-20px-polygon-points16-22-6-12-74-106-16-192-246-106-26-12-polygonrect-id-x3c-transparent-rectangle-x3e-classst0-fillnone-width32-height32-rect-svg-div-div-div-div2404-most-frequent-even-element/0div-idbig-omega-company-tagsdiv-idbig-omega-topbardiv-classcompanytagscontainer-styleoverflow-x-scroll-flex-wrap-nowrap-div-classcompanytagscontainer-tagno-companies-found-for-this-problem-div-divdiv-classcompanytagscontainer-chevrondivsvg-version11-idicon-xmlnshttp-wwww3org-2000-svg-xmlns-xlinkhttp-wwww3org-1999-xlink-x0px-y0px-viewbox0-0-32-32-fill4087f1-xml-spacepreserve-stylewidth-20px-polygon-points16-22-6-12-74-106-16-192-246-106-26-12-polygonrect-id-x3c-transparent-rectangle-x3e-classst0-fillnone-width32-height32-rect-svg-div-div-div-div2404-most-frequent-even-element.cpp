class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        unordered_map<int,int> mp;
        for(auto i:nums)
            if(i%2==0)
                mp[i]++;
        int ans=-1;
        int maxi=0;
        for(auto [i,j]:mp){
            if(maxi<j){ans=i;maxi=j;}
            if(maxi==j)ans=min(ans,i);
        }
        return ans;
    }
};