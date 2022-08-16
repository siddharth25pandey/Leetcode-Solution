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
    bool check(TreeNode* root1,TreeNode* root2)
    {
        if(!root1 or !root2) return root1==NULL and root2==NULL;
      if(root1->val==root2->val)
        {
            return check(root1->right,root2->left) and check(root1->left,root2->right);
        }
      return false;
        
    }
public:
    bool isSymmetric(TreeNode* root) {
       
        return check(root->left,root->right);
    }
};