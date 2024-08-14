class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int i = 0 ;
        int j = 1 ;
        int ans = 0 ;
        int count = 0 ;
        while(j < nums.size()){
            if(nums[i] < nums[j]){
                i++;
                count++;
                ans = max(ans , count ) ;
            }
            else{
                i = j ;
                count = 0 ;
            }
            j++;
        }
        return ans + 1 ;
    }
};