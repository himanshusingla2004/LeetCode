class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        for(int i=0;i<nums.size();i+=3){
            if(nums[i+2]-nums[i]>k) return res;
            }
        for(int i=0;i<nums.size();i+=3){
            vector<int> temp;
            temp.push_back(nums[i]);            
            temp.push_back(nums[i+1]);
            temp.push_back(nums[i+2]);
            res.push_back(temp);
        }
        return res;
    }
};