class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        set<float> st;
        sort(nums.begin(),nums.end());
        int j=nums.size()-1;
        for(int i=0;i<nums.size()/2;i++,j--){
            st.insert(static_cast<float>((nums[i]+nums[j]))/2);
        }
        return st.size();
    }
};