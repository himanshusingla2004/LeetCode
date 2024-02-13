class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int cnt=0;
        int n = nums.size();
        int j = 1;
        int prod = 1;
        int l=0;
        for(int i=0;i<n;i++){
             prod *= nums[i];
            if(prod<k)
                {cnt+=j;j++;}
            else
                {
                while(prod>=k && l<=i)
                {prod/=nums[l++];
                j--;}
                if(prod<k){cnt+=j;j++;}
            }
        }
        return cnt;
    }
};