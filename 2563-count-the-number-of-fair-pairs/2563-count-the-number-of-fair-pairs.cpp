class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        long long left=0;
        int right=0;
        int s=0,e=nums.size()-1;
        sort(nums.begin(),nums.end());
        while(s<e)
        {
            if(nums[s]+nums[e]<=upper)
            {
                left=left+(e-s);
                s++;
            }
            else
            {
                e--;
            }
        }
        s=0,e=nums.size()-1;
         while(s<e)
        {
            if(nums[s]+nums[e]<lower)
            {
                left-=e-s;
                s++;
            }
            else
            {
                e--;
            }
        }
        return left;;

    }
};