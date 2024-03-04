class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int n = tokens.size();
        if(n==0)return 0;
        sort(tokens.begin(),tokens.end());
        if(tokens[0]>power)return 0;
        int count = 0;
        
        if(n==1)return 1;
        int i=0;
        if(n>1)
        {
            while(i<n && power-tokens[i]>=0){
                power-=tokens[i++];
                count++;
                if(i<n-1 && tokens[i]>power){
                    count--;
                    n--;
                    power+=tokens[n];
                }
            }
        }
        return count;
        
    }
};