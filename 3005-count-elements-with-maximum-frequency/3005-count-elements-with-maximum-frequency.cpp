class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto i:nums) mp[i]++;
        int maxi=0;
        for(auto [i,j]: mp){
            maxi=max(maxi,j);
            
        }
        int sum=0;
        for(auto [i,j]:mp)
        if(j==maxi)sum+=j;

        return sum;
    }
};