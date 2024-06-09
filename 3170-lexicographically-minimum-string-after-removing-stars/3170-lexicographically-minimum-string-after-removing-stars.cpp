class Solution {
public:
    string clearStars(string s) {
        int n = s.size();
        vector<int> remove(n,0);
        vector<vector<int>> bucket(26);

        for(int i=0;i<n;i++){
            if(s[i]=='*'){
                remove[i]=1;
                for(int j=0;j<26;j++){
                    if(bucket[j].size()){
                        remove[bucket[j].back()]=1;
                        bucket[j].pop_back();
                        break;
                    }
                }
            }
            else{
                bucket[s[i]-'a'].push_back(i);
            }
        }
        string res;
        for(int i=0;i<n;i++)if(!remove[i])res.push_back(s[i]);
        return res;
    }
};