class Solution {
public:
    int func(vector<vector<int>>& v){
        int ans = INT_MAX;
        for(int i=0; i<3; ++i){
            for(int j=0; j<3; ++j){
                if(v[i][j]) continue;
                for(int a=0; a<3; ++a){
                    for(int b=0; b<3; ++b){
                        if(v[a][b]<2){
                            continue;
                        }
                        int res = abs(i-a)+abs(j-b);
                        --v[a][b]; ++v[i][j];
                        res+=func(v);
                        ++v[a][b]; --v[i][j];
                        ans = min(ans, res);
                    }
                }
            }
        }
        return (ans == INT_MAX ? 0 : ans);
    }
    int minimumMoves(vector<vector<int>>&v) {
        return func(v);
    }
};