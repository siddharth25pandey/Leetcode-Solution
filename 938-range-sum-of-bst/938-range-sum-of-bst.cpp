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
    public:
            int preorder(TreeNode* root,int low,int high)
            {   
                if(root!=NULL)
                {
                   
                    if((root->val)>= low and (root->val)<=high)
                    {
                        sum+=root->val;
                    }
                     preorder(root->left,low,high);
                    preorder(root->right,low,high);
                }
             return sum;
            }
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root==NULL)return 0;
        int ans=preorder(root,low,high);
        return ans;
    }
};