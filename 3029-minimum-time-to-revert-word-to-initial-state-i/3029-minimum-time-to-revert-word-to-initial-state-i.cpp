class Solution {
public:
    int minimumTimeToInitialState(string word, int k) {
        if(k==word.length()) return 1;
        int count =0;
        string temp= word;
        do
        {
            temp.erase(0,k);
            cout<<temp<<" ";
            count++;
        }while(temp.length()>=k && temp!= word.substr(0,temp.size()));
        cout<<endl;
        return temp==word.substr(0,temp.size())? count: count+1;
    }
};