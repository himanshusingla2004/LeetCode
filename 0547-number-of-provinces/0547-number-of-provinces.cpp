class Solution {
    void dfs(unordered_map<int,bool>& vis,int src,vector<vector<int>> & isConnected){
        vis[src] = true;
        // row->src
        //col->we will create a loop
        int size = isConnected[src].size();
        for(int col=0;col<size;col++){
            if(src!=col && isConnected[src][col]==1){
                //col is a nbr
                if(!vis[col]){
                    dfs(vis,col,isConnected);
                }
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        unordered_map<int,bool> visited;
        int count = 0;
        int n = isConnected.size();
        // i represents nodes
        for(int i=0;i<n;i++){
            if(!visited[i]){
                dfs(visited,i,isConnected);
                count++;
            }
        }
        return count;
    }
};