class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<long long> pref(n,0);
        pref[0]=nums[0];
        int cnt=0;
        long long maxi=-1;
        for(int i=1;i<n;i++)
            pref[i]=pref[i-1]+nums[i];
        for(int i=0;i<n;i++){
            if(++cnt>=3)
                if(pref[i-1]>nums[i])
                maxi = max(maxi,pref[i]);
        }
        return maxi;
    }
};