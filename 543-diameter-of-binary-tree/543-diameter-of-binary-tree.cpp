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
    int height(TreeNode* root,int &dia)
    {
        if(!root)return 0;
        int left_tree=height(root->left,dia);
        int right_tree=height(root->right,dia);
        dia=max(dia,left_tree+right_tree);
        return 1+max(left_tree,right_tree);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int ans=0;
        int p=height(root,ans);
        return ans;
    }
};