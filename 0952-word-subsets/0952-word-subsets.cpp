class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        int i;
        vector<int> tmp(26),count(26);
        vector<string> ans;
        for(auto i:words2){
            tmp=counter(i);
            for(int j=0;j<26;j++){
                count[j]=max(count[j],tmp[j]);
            }
        }
        for(auto i:words1){
            tmp=counter(i);
            int j;
            for( j=0;j<26;j++){
                if(tmp[j]<count[j])
                    break;
            }
            if(j==26)
                ans.push_back(i);
        }
        return ans;
    }
    vector<int> counter(string s){
        vector<int> res(26,0);
            for(auto i:s)
                res[i-'a']++;
        return res;
    }
};