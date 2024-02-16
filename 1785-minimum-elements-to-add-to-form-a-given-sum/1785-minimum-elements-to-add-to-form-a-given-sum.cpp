class Solution {
public:
    int minElements(vector<int>& nums, int limit, int goal) {
        long long sum=0;
        for(auto it : nums)sum+=it;
        sum-=goal;
        sum=abs(sum);
        int ans = (sum+limit-1)/limit;
        return ans;
    }
};