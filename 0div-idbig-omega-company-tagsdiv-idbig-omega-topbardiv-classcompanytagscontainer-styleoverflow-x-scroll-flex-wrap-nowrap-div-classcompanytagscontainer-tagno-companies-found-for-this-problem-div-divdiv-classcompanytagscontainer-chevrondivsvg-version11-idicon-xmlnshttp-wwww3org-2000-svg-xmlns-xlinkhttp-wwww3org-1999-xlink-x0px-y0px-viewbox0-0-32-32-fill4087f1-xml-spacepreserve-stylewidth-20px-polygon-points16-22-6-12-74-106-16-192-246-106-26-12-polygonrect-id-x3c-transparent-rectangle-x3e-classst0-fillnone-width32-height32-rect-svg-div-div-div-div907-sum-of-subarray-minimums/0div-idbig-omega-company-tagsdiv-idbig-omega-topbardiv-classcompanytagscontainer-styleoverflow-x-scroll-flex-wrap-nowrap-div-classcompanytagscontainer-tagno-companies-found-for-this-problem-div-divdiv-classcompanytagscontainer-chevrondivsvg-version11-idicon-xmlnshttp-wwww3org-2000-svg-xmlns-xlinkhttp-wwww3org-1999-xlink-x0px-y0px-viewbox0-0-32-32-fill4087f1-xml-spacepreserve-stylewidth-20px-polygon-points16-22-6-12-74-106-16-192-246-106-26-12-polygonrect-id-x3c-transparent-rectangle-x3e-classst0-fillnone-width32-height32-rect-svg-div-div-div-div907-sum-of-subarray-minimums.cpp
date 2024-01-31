class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        stack<int> st;
        vector<int> tmp(arr.size(),-1);
        // getting minimum of current element in just left subarray
        for(int i=arr.size()-1;i>=0;i--){
            while(!st.empty() && arr[st.top()]>arr[i]){
                tmp[st.top()]=i;
                st.pop();
            }
            st.push(i);
        }
        vector<int> tmp2(arr.size(),arr.size());  // getting minimum of current element in just right subarray
        st = stack<int>();
        for(int i=0;i<arr.size();i++){
            while(!st.empty() && arr[st.top()]>=arr[i]){
                tmp2[st.top()]=i;
                st.pop();
            }
            st.push(i);
        } 
        long long sum = 0, modulo = 1e9+7;
        
        for(int i = 0; i<arr.size(); i++){
            sum += ((static_cast<long long>(i-tmp[i])*static_cast<long long>(tmp2[i]-i))*static_cast<long long>(arr[i]))%modulo;
        }
    
        return sum%modulo;
    }
};