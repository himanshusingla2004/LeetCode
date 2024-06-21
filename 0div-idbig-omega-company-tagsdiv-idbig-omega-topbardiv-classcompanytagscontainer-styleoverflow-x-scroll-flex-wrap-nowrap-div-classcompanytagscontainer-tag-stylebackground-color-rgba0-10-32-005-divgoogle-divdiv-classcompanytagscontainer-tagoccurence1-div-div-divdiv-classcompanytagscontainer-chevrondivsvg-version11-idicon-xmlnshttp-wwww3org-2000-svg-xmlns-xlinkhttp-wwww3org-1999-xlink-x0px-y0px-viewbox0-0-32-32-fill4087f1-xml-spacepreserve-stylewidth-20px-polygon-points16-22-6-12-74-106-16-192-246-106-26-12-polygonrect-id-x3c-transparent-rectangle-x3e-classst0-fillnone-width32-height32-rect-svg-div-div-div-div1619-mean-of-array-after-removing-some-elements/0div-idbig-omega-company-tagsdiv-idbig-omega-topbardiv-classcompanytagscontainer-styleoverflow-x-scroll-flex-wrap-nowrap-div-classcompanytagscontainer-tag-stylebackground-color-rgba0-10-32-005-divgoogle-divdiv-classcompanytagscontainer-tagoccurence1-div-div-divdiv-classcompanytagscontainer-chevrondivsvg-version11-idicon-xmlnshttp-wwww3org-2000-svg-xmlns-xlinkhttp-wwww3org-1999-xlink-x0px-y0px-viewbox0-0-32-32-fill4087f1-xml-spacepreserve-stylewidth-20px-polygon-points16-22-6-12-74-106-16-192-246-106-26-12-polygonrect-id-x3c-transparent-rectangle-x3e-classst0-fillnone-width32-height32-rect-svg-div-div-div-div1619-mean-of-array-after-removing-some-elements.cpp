class Solution {
public:
    double trimMean(vector<int>& arr) {
        int n =arr.size()/20;
        double ans=0;
        for(int i=0;i<n;i++){
            int mini = *min_element(arr.begin(),arr.end());
            int maxi = *max_element(arr.begin(),arr.end());
            auto it = find(arr.begin(),arr.end(),mini);
            arr.erase(it);
            it = find(arr.begin(),arr.end(),maxi);
            arr.erase(it);
        }
        n=arr.size();
        for(double i:arr){
            ans+=i/n;
        }
        return ans;
    }
};