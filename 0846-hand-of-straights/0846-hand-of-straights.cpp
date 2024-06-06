class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n = hand.size();
        if(n%groupSize != 0)return false;
        map<int,int> mp;
        for(auto i:hand)
            mp[i]++;
        
        for(auto m=mp.begin();m!=mp.end();m++){
            if(m->second>0){
                int cnt = m->second;
                for(int i=1;i<groupSize;i++){
                    if(mp[m->first+i]<cnt)return false;
                    mp[m->first+i]-=cnt;
                }
            }
        }
        return true;
    }
};