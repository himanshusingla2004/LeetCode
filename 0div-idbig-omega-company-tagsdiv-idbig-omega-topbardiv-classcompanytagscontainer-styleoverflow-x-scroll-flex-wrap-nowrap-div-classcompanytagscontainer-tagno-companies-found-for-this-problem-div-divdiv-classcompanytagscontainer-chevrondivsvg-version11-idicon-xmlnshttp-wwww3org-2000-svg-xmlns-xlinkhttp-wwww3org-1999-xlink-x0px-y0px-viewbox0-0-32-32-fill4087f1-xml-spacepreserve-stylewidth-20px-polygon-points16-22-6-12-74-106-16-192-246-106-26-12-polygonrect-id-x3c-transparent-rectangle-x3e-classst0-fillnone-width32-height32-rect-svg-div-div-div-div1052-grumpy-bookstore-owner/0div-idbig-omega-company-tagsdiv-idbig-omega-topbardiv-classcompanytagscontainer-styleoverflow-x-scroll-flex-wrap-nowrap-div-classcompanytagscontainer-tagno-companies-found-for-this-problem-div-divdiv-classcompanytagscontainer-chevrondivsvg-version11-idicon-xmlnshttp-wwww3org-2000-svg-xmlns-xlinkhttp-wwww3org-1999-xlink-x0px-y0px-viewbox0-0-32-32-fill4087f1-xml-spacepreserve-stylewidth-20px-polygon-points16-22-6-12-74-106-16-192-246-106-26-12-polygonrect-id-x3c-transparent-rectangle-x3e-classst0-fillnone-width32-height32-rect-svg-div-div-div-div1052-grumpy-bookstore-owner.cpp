class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n = customers.size();
        int m=0;int sat = 0;
        int addm=0;
        for(int i=0;i<n;i++){
            sat += (!grumpy[i]) * customers[i];
            addm += grumpy[i] * customers[i];
            if(i >= minutes) addm-=grumpy[i-minutes] * customers[i-minutes];
            m = max(addm,m);
        }
        return m+sat;
    }
};