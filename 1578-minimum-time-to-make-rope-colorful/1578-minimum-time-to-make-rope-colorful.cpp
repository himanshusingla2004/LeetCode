class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int ans=0;
        for(int i=0;i<colors.size()-1;i++){
            if(colors[i]==colors[i+1]){
                int temp = min(neededTime[i],neededTime[i+1]);
                ans+=temp;
                if(neededTime[i+1]==temp){
                    neededTime[i+1]=neededTime[i];
                }
            }
        }
        return ans;
    }
};