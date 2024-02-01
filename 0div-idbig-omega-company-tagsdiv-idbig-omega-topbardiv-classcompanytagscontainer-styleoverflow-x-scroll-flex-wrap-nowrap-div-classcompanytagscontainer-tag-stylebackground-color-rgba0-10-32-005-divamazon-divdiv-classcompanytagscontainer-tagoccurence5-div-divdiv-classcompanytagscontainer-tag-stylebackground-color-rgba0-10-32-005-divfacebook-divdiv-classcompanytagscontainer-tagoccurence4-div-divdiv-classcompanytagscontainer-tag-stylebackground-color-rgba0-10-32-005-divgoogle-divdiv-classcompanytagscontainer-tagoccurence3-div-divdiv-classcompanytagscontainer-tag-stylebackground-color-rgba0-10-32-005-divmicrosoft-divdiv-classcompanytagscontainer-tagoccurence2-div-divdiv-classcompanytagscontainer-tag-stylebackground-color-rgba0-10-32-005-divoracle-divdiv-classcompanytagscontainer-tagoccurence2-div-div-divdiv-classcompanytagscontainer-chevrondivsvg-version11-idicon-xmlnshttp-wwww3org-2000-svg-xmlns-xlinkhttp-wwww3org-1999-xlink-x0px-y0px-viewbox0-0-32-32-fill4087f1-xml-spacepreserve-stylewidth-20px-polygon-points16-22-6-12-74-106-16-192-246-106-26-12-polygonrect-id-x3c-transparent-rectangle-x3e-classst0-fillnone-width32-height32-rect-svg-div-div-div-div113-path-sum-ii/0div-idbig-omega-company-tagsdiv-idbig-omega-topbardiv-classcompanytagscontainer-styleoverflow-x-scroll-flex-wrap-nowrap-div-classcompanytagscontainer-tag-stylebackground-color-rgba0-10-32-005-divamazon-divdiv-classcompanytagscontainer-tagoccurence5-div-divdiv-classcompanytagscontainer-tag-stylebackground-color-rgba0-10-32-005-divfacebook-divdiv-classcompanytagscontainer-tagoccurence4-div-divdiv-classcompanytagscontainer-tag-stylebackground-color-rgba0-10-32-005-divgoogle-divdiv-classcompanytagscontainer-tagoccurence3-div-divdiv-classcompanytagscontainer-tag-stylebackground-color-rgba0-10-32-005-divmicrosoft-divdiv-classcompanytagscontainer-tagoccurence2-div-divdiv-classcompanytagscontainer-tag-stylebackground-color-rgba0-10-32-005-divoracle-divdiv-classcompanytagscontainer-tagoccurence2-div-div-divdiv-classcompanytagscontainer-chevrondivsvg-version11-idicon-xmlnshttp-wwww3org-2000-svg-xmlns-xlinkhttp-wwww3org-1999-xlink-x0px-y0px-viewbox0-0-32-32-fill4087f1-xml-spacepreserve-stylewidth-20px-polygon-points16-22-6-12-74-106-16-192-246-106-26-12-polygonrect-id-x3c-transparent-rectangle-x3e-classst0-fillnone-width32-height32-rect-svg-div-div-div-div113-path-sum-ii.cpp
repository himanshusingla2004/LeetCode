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
    void solve(vector<vector<int>> &res,vector<int> temp,TreeNode* root,int targetSum){
        if(root==NULL)return;
        temp.push_back(root->val);
        if(root->right==NULL && root->left==NULL && targetSum-root->val == 0) {res.push_back(temp); return;}
        solve(res,temp,root->left,targetSum-root->val);
        solve(res,temp,root->right,targetSum-root->val);
        return;
    
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
         vector<int> temp;
        vector<vector<int>> res;
        solve(res,temp,root,targetSum);
        return res;
    }
};