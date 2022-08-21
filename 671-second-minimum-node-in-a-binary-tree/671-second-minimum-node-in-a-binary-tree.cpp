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
    void inorder(TreeNode* root, set<int>&v)
    {
        if(!root)return;
        inorder(root->left,v);
        v.insert(root->val);
       inorder(root->right,v);
    }
    int findSecondMinimumValue(TreeNode* root) {
        set<int>v;
        inorder(root,v);
        if(v.size()<=1)return -1;
       auto i=v.begin();
        i++;
        return *i;
    }
};