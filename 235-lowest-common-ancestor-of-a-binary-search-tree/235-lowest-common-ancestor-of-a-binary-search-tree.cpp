/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root) return NULL;
        if(root==p or root==q) return root;
        TreeNode*left_traverse=lowestCommonAncestor(root->left,p,q);
        TreeNode*right_traverse=lowestCommonAncestor(root->right,p,q);
        if(left_traverse and right_traverse ) return root;
        if(right_traverse) return right_traverse;
         return left_traverse;
        
    }
};