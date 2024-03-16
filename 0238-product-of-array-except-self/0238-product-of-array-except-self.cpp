class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int right=nums[n-1];
        vector<int> res(n);
        
        res[0]=1;
        for(int i=1;i<n;i++){
            res[i]=res[i-1]*nums[i-1];
        }
        for(int i=n-2;i>=0;i--){
            res[i] *= right;
            right *= nums[i];
        }
        return res;
    }
};