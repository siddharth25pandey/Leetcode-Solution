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
    int sum=0;
    int traverse(TreeNode* root, bool v)
    {
        if(!root) return sum;
        traverse(root->left,true);
         traverse(root->right,false);
        if(root->left==NULL and root->right==NULL and v==true)
        {
            sum+=root->val;
        }
        return sum;
        
    }
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root) return 0;
        bool v=false;
        int p= traverse(root,v);
        return p;
        
    }
};