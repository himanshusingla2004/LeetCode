class Solution {
public:
    long long minimalKSum(vector<int>& nums, int k) {
        long long ans = (static_cast<long long>(k)* (static_cast<long long>(k+1)))/2;
        set<int> st(nums.begin(),nums.end());
        nums.clear();
        for(auto i:st) nums.push_back(i);

        int sz = nums.size();
        for(auto i:nums){
            if(i<=k){
                ans-=i;
                ans+=k+1;
                k++;
            }else break;
        }
        return ans;
    }
};