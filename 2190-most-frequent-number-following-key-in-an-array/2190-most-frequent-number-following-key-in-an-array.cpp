class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        int ans=0;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==key)mp[nums[i+1]]++;
        }
        int maxi=0;
        for(auto [i,j]:mp)
            if(j>maxi){
                maxi=j;
                ans=i;
            }
        return ans;
    }
};