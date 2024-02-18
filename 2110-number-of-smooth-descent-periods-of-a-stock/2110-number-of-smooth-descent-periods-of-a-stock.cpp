class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        long long count = 0;
        int cont = 1;//contigous
        for(int i=0;i<prices.size()-1;i++){
            if(prices[i]-prices[i+1]==1){
                count +=cont;
                cont++;
            }
            else cont=1;
        }
        return count+prices.size();
    }
};