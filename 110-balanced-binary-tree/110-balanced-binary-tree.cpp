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
    bool isBalanced(TreeNode* root) {
        bool z=true;
        int p=height(root,z);
        return z;
        
    }
    int height(TreeNode* root, bool& v)
    {
        if(!root)
        {
            return 0;
        }
        if(v==false) return 0;
        else 
        {   
             int left_tree=height(root->left,v);
            int right_tree=height(root->right,v);
            if(abs(left_tree-right_tree)>1)
            {
                v=false;
            }
            
            return 1+max(height(root->left,v),height(root->right,v));
        }
    }
};