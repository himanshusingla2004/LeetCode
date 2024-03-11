class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int> mp;
        for(auto i:s){
            mp[i]++;
        }
        string ans;
        for(auto i:order){
            if(mp[i]){ ans.append(mp[i],i);mp[i]=0;}
        }
        for(auto [i,j]:mp){
            if(j)ans.append(j,i);
        }
        return ans;
    }
};