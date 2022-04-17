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
    void inorder(TreeNode* root, vector<int>&v)
    {
       if(root==NULL) return;
        if(root->left!=NULL)
        {
        inorder(root->left,v);
        }
         v.push_back(root->val);
        if(root->right!=NULL)
        {
        inorder(root->right,v);
        }
    }
public:
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* ptr=NULL, *temp=NULL;
        vector<int>v;
       inorder(root,v);
        for(int i = 0;i<v.size();i++)
        {
            if(ptr==NULL){
                ptr = new TreeNode(v[i]);
                temp = ptr;
            }else{
                 ptr->right =  new TreeNode(v[i]);
                ptr=ptr->right;
            }
          
           
        }
        return temp;
    }
};