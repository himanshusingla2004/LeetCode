class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.length()!=word2.length()) return false;
        unordered_map<int,int> mp,mp2;
        for(int i=0;i<word1.length();i++){
            mp[word1[i]]++;
            mp2[word2[i]]++;
        } 
        
        vector<int> num1, num2;
        
        for(auto it : mp){
            if(mp2[it.first] == 0) return false;
        }
        
        for(auto it : mp) num1.push_back(it.second);
        for(auto it : mp2) num2.push_back(it.second);
        
        sort(num1.begin(),num1.end());
        sort(num2.begin(),num2.end());
        
        return num1 == num2;
        
    }
};