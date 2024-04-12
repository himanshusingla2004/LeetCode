class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<int> vec(n*n,0),ans(2);
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                vec[grid[i][j]-1]++;
        int count =1;
        for(auto i:vec){
            if(i==0)ans[1]=count;
            if(i==2)ans[0]=count;
            count++;
        }
        return ans;
    }
};