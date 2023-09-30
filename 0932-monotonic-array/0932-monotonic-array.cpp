class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n=nums.size();
        bool inc=true,dec=true;
        if(n==1) return true;
        for(int i=1;i<n;i++){
            if(nums[i] > nums[i-1])
            {dec=false;
            break;}
        }
        for(int i=1;i<n;i++){
            if(nums[i]<nums[i-1])
            {inc=false;
            break;}
        }
        if(inc||dec)
        return true;
        return false;

    }
};