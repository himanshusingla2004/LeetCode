class Solution {
public:
    string getPermutation(int n, int k) {
        string temp;
        for(int i=1;i<=n;i++){
            temp+=(i+'0');
        }k--;
        while(k--)
        next_permutation(temp.begin(),temp.end());
        return temp;
    }
};