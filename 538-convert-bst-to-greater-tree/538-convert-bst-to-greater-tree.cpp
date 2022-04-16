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
    int sum=0;
    void inorder_reverse(TreeNode* root)
    {
     if(root->right!=NULL) inorder_reverse(root->right);
        sum+=root->val;
    root->val=sum;
        if(root->left!=NULL)inorder_reverse(root->left);
        
    }
public:
    TreeNode* convertBST(TreeNode* root) {
        if(!root) return NULL;
        sum=0;
        inorder_reverse(root);
        return root;
    }
};