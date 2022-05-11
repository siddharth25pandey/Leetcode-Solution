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
       /*if(root==NULL) return NULL;
        if(root==p or root==q) return root;
        TreeNode* left=lowestCommonAncestor(root->left, p, q);
        TreeNode* right=lowestCommonAncestor(root->right, p, q);
        if(left!=NULL and right!=NULL) return root;
        //if(left==NULL and right!=NULL) return NULL;
       if(left!=NULL) return left;
        return right;*/
        if(root==NULL) return NULL;
        if(root==p or root==q) return root;
        TreeNode*left_tra=lowestCommonAncestor(root->left,p,q);
        TreeNode*right_tra=lowestCommonAncestor(root->right,p,q);
        if(left_tra!=NULL and right_tra!=NULL) return root;
        if(left_tra!=NULL) return left_tra;
        else return right_tra;
        
    }
};