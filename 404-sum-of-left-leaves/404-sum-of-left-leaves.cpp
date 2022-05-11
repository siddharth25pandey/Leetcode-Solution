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
    
    void traverse(TreeNode* root, bool v, int &sum)
    {
        if(!root) return;
        traverse(root->left,true,sum);
         traverse(root->right,false,sum);
        if(root->left==NULL and root->right==NULL and v==true)
        {
            sum+=root->val;
        }
        return;
        
    }
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root) return 0;
        bool v=false;
        int sum=0;
        traverse(root,v,sum);
        return sum;
        
    }
};