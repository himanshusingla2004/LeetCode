/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        queue<Node*> q;
        if(root==NULL)return {};
        q.push(root);
        q.push(NULL);
        vector<int> curr;
        vector<vector<int>> ans;
        
        while(!q.empty()){
            Node* front = q.front();
            q.pop();
            if(front==NULL){
                ans.push_back(curr);
                curr.clear();
                if(!q.empty())q.push(NULL);
            }
            else{
                curr.push_back(front->val);
                for(Node* n:front->children)
                    q.push(n);
            }
        }
        return ans;
    }
};