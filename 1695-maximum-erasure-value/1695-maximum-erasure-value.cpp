class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_set<int> st;
        int sum=0,res=0,i=0,j=0;
        int n=nums.size();

        while(i<n && j<n){
            if(st.find(nums[j]) == st.end()){
                sum+=nums[j];
                st.insert(nums[j]);
                j++;
            }
            else{
                sum-=nums[i];
                st.erase(nums[i++]);
            }
            res = max(res,sum);
        }
        
        
        return res;
            
    }
};