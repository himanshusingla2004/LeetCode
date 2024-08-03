class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> vec;
        for (auto i : nums)
            vec.push_back(to_string(i));
        sort(vec.begin(), vec.end(), [](string &a, string &b) {
            return a + b > b + a;
        });
        string result;
        if(vec[0]=="0")return "0";
        for (auto i : vec)
            result += i;
        return result;
    }
};
