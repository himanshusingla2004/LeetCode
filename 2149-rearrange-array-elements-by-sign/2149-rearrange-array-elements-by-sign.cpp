class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> temp;
        int i=0,j=0;
        while(i<nums.size()&&j<nums.size()){
           while(nums[i]<0){
               i++;
           }temp.push_back(nums[i]);
           while(nums[j]>0){
               j++;
           }
           temp.push_back(nums[j]);
           i++,j++;
        }
        return temp;
    }
};