class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int> mp;
        for(auto it:arr)mp[it]++;
        priority_queue<int,vector<int>, greater<int>> pq;
        for(auto [i,j]:mp)pq.push(j);
        while(!pq.empty() && k>=0){
            k-=pq.top();
            if(k>=0){pq.pop();}
            else break;
        }
        return pq.size();
    }
};