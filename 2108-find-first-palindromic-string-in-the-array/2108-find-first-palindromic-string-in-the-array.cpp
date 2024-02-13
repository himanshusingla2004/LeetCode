class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++){
            int k=0;
            int j=words[i].length()-1;
            while(k<j && words[i][k]==words[i][j]){
                k++;j--;
            }
            if(k>=j)
            return words[i];
        }
        return "";
    }
};