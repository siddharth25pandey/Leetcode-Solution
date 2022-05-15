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
    void flatten(TreeNode* root) {
       TreeNode* ptr=root;
    while(ptr)
    {
        if(ptr->left)
        {
            TreeNode* temp= ptr->left;
            while(temp->right!=NULL)
            {
                temp=temp->right;
            }
            temp->right=ptr->right;
            ptr->right=ptr->left;
            ptr->left=NULL;

        }else{
            ptr=ptr->right;
        }
    }
    }
};