class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        int temp=1;
        vector<int> res;
        
        for(int i=1;i<=9;i++){
            temp = i;
            int n=res.size();
            for(int j=i+1;j<=9;j++){
            temp = temp*10 +j;
                // cout<<temp;
            if(temp>=low && temp<=high) res.push_back(temp);
            }
        }
        sort(res.begin(),res.end());
        return res;
    }
};