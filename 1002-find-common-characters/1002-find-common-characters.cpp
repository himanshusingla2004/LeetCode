class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> minfre(26,INT_MAX);
        vector<string>res;
        for(auto i:words){
            vector<int> freq(26,0);
            for(auto c:i)
                freq[c-'a']++;
            for(int i=0;i<26;i++)minfre[i]=min(minfre[i],freq[i]);
        }
        for(int i=0;i<26;i++){
            while(minfre[i]-- >0)res.push_back(string(1,i+'a'));
        }
        return res;
    }
};