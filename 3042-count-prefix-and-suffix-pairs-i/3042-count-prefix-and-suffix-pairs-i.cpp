class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int n = words.size();
        int cnt = 0;
        
        for(int i = 1; i<n; i++){
            string s = words[i];
            
            for(int j = 0; j<i; j++){
                bool f1 = true, f2 = true;
                string s2 = words[j];
                
                for(int k = 0; k<s2.size(); k++)
                    if(s2[k] != s[k]){
                        f1 = false;
                        break;
                    }
                
                int p = s.size()-1;
                for(int k = s2.size()-1; k>=0; k--){
                    if(p<0){
                            f2 = false;
                            break;
                        }
                    
                    if(s2[k] != s[p]){
                        f2 = false;
                        break;
                    }
                    p--;
                }
                
                if(f1 && f2){
                    cnt++;
                }
            }
        }
        
        return cnt;
    }
};