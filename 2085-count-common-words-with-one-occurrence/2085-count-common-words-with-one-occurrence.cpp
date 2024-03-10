class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string,int> mp1,mp2;
        int ans=0;
        for(auto i:words1){
            mp1[i]++;
        }
        for(auto i:words2){
            mp2[i]++;
        }
        for(auto [i,j]:mp1){
            if(j==1 && mp2[i]==1) ans++;
        }
        return ans;
    }
};