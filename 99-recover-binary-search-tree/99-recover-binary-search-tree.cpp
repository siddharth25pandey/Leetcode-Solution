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
    TreeNode* first_mistake,*second_mistake,*pre;
    void inorder(TreeNode* root)
    {
        if(!root) return;
        inorder(root->left);
        if(first_mistake==NULL and root->val<pre->val)
        {
            first_mistake=pre;
            
        }
        if(first_mistake!=NULL and root->val<pre->val)
        {
            second_mistake=root;
            
        }
        pre=root;
        inorder(root->right);
        
        
    }
    void recoverTree(TreeNode* root) {
       
       pre= new TreeNode(INT_MIN);
        inorder(root);
        swap(first_mistake->val,second_mistake->val);
    }
};