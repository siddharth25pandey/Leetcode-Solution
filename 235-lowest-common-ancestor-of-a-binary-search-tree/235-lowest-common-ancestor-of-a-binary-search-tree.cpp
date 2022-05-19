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
        if(root==NULL) return NULL;
        if(root==p or root==q) return root;
        TreeNode*left_tra=lowestCommonAncestor(root->left,p,q);
        TreeNode*right_tra=lowestCommonAncestor(root->right,p,q);
        if(left_tra!=NULL and right_tra!=NULL) return root;
        if(right_tra!=NULL) return right_tra;
        else return left_tra;
        
    }
};