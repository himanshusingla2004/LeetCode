class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        int n=word1.length();
        if(n<=3) return true;
        unordered_map<int,int> mp,mp2;
        for(int i=0;i<n;i++){
            mp[word1[i]]++;
            mp2[word2[i]]++;
        }
        for(auto [i,j]:mp){
            if(mp2.find(i)==mp2.end() && j>3) return false;
            if(abs(mp2[i]-j)>=4)return false;
        }
        for(auto [i,j]:mp2){
            if(mp.find(i)==mp.end() && j>3) return false;
        }
        return true;
    }
};