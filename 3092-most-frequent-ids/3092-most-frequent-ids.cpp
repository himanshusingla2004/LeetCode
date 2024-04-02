#define ll long long
class Solution {
public:
    vector<long long> mostFrequentIDs(vector<int>& nums, vector<int>& freq) {
        map<int,ll> mp;
        map<ll,int> mp2;
        vector<long long> ans;
        for(int i=0;i<nums.size();i++){
            if(mp.find(nums[i])!=mp.end()){
                mp2[mp[nums[i]]]--;
                if(mp2[mp[nums[i]]] == 0)mp2.erase(mp[nums[i]]);
                mp[nums[i]]+=freq[i];
                mp2[mp[nums[i]]]++;
                auto it = mp2.rbegin();
                ans.push_back(it->first);
                
                
            }
            else{
                
                mp[nums[i]]=freq[i];
                mp2[mp[nums[i]]]++;
                
                auto it = mp2.rbegin();
                ans.push_back(it->first);
            }
        }
        
        return ans;
    }
};