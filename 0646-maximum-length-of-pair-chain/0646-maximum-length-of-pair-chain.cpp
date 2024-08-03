class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(),pairs.end(),[](vector<int>&a,vector<int> &b){
            return a[1]<b[1] || (a[1]==b[1] && a[0]<b[0]);
        });

        int cnt =1;
        int temp = pairs[0][1];
        for(int i = 1;i<pairs.size();i++){
            if(pairs[i][0]>temp)
                {cnt++;
                temp = pairs[i][1];}
        }
        return cnt;
    }
};