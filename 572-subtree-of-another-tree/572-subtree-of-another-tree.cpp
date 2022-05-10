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
    bool is_symmetric(TreeNode* r1, TreeNode* r2)
    {
        if(!r1 or !r2) return r1==NULL and r2==NULL;
        else if(r1->val==r2->val)
        {
            return is_symmetric(r1->left,r2->left) and is_symmetric(r1->right,r2->right);
            
        }
        else
        {
            return false;
        }
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root==NULL) return false;
        else if(is_symmetric(root,subRoot)) return true;
        else return isSubtree(root->left,subRoot) or isSubtree(root->right,subRoot);
    }
};