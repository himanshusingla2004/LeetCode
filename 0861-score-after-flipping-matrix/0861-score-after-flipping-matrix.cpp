class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int r = grid.size();
        int c = grid[0].size();
        for(int i=0;i<r;i++){
            if(grid[i][0]==0)
                for(int j=0;j<c;j++)grid[i][j]=grid[i][j]?0:1;
        }
        for(int i=0;i<c;i++){
            int cnt=0;
            for(int j=0;j<r;j++){
                if(grid[j][i])cnt++;
            }
            if(cnt<=r/2)for(int j=0;j<r;j++)grid[j][i]=grid[j][i]?0:1;
        }
        int ans=0;
        
        for(auto &temp:grid){
            int num = 0;
            for(int &it:temp) {
                num = (it) ? ((num<<1)+1): num<<1;
            }
            ans+=num;
        }
        return ans;
    }
};