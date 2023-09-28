class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
        int f=target[0],s=target[1],t=target[2];
        bool first=false,second=false,third=false;
        for(auto i:triplets){
            if(i[0]==f || i[1]==s || i[2]==t){
                if(i[0]==f && (i[1]<=s && i[2]<=t))
                first=true;
                if(i[1]==s && (i[0]<=f && i[2]<=t))
                second=true;
                if(i[2]==t && (i[1]<=s && i[0]<=f))
                third=true;
                if(first&&second&&third) return true;
            }
            
        }
        return first&&second&&third;
    }
};