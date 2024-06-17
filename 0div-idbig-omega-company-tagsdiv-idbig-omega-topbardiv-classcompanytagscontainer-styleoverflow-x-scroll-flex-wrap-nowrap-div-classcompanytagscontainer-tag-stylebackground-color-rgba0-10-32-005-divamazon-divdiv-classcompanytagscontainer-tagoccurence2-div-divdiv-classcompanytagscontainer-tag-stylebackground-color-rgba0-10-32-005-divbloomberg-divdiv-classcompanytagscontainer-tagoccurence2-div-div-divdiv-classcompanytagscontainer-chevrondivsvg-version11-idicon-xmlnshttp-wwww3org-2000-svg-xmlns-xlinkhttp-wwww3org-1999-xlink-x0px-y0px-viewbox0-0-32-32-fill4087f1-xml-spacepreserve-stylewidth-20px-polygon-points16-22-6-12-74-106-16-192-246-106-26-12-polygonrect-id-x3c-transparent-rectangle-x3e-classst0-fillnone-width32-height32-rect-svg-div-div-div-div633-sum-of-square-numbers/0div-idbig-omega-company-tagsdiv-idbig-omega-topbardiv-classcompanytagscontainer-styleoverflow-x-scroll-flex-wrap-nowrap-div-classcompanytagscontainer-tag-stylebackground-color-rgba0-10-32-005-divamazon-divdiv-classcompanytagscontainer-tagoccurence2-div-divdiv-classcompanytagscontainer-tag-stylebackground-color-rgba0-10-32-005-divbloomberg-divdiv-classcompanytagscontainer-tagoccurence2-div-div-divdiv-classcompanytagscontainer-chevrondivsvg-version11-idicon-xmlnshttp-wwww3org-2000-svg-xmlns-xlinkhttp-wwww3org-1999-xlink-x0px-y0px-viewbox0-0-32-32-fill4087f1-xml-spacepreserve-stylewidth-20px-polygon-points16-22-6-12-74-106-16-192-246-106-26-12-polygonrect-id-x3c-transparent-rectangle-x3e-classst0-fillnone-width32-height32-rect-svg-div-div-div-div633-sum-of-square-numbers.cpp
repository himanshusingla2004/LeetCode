class Solution {
public:
    bool judgeSquareSum(int c) {
        if(c<0)return false;
        long int a = 0;
        int b = sqrt(c);
        while(a<=b){
            long int t = b*b+a*a;
            if(t == c)return true;
            else if(t<c)a++;
            else b--;
            
        }
    return false;
    }
};