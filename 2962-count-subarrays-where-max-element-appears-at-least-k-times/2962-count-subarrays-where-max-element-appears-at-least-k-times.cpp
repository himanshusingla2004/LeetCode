class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int i=0;
        long long res = 0;
        int cur = 0;
        int maxi = *max_element(nums.begin(),nums.end());
        for(int j=0;j<nums.size();j++){
            cur += nums[j]==maxi;
            while(cur>=k){
                cur-= nums[i++]==maxi;
            }
            res+= i;
        }
        return res;
    }
};