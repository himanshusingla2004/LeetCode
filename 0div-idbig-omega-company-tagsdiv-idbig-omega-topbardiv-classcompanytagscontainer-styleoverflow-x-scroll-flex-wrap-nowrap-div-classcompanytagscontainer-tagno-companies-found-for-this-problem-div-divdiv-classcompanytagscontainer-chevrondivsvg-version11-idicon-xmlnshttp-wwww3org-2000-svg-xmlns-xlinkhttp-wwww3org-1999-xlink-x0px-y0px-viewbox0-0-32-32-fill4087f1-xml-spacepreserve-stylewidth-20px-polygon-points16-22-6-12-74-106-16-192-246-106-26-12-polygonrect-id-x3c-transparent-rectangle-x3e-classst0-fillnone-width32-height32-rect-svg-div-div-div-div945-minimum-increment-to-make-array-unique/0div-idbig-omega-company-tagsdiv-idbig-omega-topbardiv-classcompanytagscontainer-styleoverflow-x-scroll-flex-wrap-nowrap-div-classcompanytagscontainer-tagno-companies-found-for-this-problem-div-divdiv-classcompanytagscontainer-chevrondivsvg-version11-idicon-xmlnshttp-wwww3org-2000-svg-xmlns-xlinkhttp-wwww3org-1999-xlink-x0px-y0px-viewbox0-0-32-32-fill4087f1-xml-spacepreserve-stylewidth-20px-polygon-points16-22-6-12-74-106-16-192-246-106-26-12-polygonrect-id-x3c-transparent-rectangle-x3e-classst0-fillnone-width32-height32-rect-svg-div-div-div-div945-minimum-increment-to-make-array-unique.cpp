class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int ans=0;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){ans++;nums[i]++;}
            while(nums[i]<nums[i-1]){ans+=2,nums[i]+=2;}
            if(nums[i]==nums[i-1]){ans++;nums[i]++;}

        }
        return ans;
    }
    
};