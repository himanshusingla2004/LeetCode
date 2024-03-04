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
    vector<int> ans;
    void traversal(Node* root){
        if(root == NULL) return;
        ans.push_back(root->val);
        for(Node* n:root->children)
        traversal(n);
    }
    vector<int> preorder(Node* root) {
        traversal(root);
        return ans;
    }
};