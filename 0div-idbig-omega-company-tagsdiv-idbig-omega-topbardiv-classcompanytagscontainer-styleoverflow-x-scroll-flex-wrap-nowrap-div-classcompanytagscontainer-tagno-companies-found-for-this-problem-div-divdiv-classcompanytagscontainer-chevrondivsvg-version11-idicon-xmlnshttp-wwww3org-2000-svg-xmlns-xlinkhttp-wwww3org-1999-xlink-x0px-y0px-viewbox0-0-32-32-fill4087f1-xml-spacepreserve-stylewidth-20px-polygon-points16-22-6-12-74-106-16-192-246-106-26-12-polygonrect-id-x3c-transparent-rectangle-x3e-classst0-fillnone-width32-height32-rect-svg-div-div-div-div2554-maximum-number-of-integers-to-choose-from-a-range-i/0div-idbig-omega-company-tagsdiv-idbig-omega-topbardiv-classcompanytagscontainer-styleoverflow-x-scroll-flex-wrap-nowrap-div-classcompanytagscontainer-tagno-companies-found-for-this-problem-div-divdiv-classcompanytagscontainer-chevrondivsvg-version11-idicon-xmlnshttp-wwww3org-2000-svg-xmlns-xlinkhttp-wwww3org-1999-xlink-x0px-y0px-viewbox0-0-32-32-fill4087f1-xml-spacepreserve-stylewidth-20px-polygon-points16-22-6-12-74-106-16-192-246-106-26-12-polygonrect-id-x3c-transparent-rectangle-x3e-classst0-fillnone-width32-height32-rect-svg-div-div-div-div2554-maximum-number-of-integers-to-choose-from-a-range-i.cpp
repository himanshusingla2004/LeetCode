class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        sort(banned.begin(),banned.end());
        int count=0;
        int sum=0;
        for(int i=1;i<=n;i++){
            auto it = find(banned.begin(),banned.end(),i);
            if(it != banned.end())
                continue;
                
            sum += i;
            if(sum<=maxSum)
                count++;
            else 
                return count;
        }
        
        return count;
    }
};