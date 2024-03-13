class Solution {
public:
    int pivotInteger(int n) {
        if(n==1) return 1;
        int sum1=0;int sum2=0;
        int i=1,j=n;
        sum1+=i++;
        sum2+=j--;
        while(i!=j && i<j){
            if(sum1<sum2)
            sum1+=i++;
            else
            sum2+=j--;
        }
        if(sum1==sum2)
        return i;
        return -1;
    }
};