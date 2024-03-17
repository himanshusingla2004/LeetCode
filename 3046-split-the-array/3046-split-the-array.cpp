class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto it:nums){
            mp[it]++;
        }
        bool spilt = false;
        for(auto it:mp){
            if(it.second<=2)
                spilt = true;
            else{
                spilt=false;
                break;
            }
        }
        return spilt;
            
    }
};