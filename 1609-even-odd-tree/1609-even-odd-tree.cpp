/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isEvenOddTree(TreeNode* root) {
        if(root == NULL) return true;
        bool flag = true;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int x = q.size();
            int prev = flag?INT_MIN:INT_MAX;
            for(int i=0;i<x;i++){
                TreeNode* frontN = q.front();
                q.pop();
                if(flag){
                    if(frontN->val<=prev || frontN->val%2==0) return false;
                }
                else{
                    if(frontN->val>=prev || frontN->val%2==1) return false;
                }
                if(frontN->left)q.push(frontN->left);
                if(frontN->right)q.push(frontN->right);
                prev=frontN->val;
            }
            flag=!flag;
        }
        return true;
    }
};