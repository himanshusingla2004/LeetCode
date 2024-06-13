class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> ans;
        map<int,int> mp;
        
        for(auto j:arr1)mp[j]++;
        for(auto i:arr2){ans.insert(ans.end(),mp[i],i);mp.erase(i);}
        for(auto [i,j]:mp)ans.insert(ans.end(),j,i);
        
        return ans;
    }
};