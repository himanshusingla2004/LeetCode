class Solution {
public:
    string greatestLetter(string s) {
        map<char,int> mp;
        for(auto i:s)mp[i]++;
        for(char ch='Z';ch>='A';ch--){
            if(mp.find(ch)!=mp.end() && mp.find(ch+32)!=mp.end()){string st;st += ch;return st;}
        }
        return "";
    }
};