class Solution {
public:
    vector<int> peopleIndexes(vector<vector<string>>& fc) {//fc->favourite companies
        vector<int> res;
        for(auto &it : fc)
            sort(it.begin(),it.end());
        
        for(int i = 0; i<fc.size(); i++){
            bool issubset = false;
            for(int j = 0; j<fc.size(); j++){
                if(i == j){
                    continue;
                }
                issubset = includes(begin(fc[j]),end(fc[j]),begin(fc[i]),end(fc[i]));
                if(issubset)
                    break;
            }
            if(!issubset)
                res.push_back(i);
        }
        
        return res;
    }
};