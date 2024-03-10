class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        s1+=' ',s2+=' ';
        unordered_map<string,int> mp,mp2;
        vector<string> ans;
        string temp;
        for(auto i:s1){
            if(i!=' ')temp+=i;
            else
            {mp[temp]++;temp="";}
        }
        for(auto i:s2){
            if(i!=' ')temp+=i;
            else
            {mp2[temp]++;temp="";}
        }
        for(auto [i,j]:mp){
            if(j==1 && mp2.find(i)==mp2.end()) ans.push_back(i);
        }
        for(auto [i,j]:mp2){
            if(j==1 && mp.find(i)==mp.end()) ans.push_back(i);
        }
        return ans;
    }
    
};