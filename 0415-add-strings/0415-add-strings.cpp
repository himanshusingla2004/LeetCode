class Solution {
public:
    string addStrings(string num1, string num2) {
        int c = 0;
        int i=num1.size()-1;
        int j=num2.size()-1;
        string ans = "";
        int sum = 0 ;
        while(i>=0 || j>=0){
            // ans+= c;
            // int f,s;
            sum = 0 + c ;
            if(i>=0){
                sum += num1[i]-'0';
            }
            if(j>=0){
                sum += num2[j]-'0';
            }
            c = sum/10;
            int x = sum%10;
            ans.push_back(x + '0');
            i--,j--;
        }
        if(c != 0){
            ans.push_back(c + '0');
        }
        reverse(ans.begin(),ans.end());
        return ans ;
    } 
};