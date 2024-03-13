class Solution {
public:
    vector<int> circularGameLosers(int n, int k) {
        vector<bool> temp(n+1,false);
        int t=k;
        k=0;
        int i=1;
        while(i<=n){
            if(temp[i]==true)
                break;
            temp[i]=true;k+=t;
            i+=k;
            if(i%n!=0)i%=n;
            else i=n;
            
        }
        vector<int> ans;
        for(int i=1;i<=n;i++)
            if(temp[i]==false)ans.push_back(i);
        return ans;
    }
};