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
    int dfs(TreeNode* root, int &ans)
    {
        if(!root) return 0;
        int value=dfs(root->left,ans)+dfs(root->right,ans);
        if(value==0) return 3;
        if(value<3) return 0;
        ans++;
        return 1;
    }
    int minCameraCover(TreeNode* root) {
        int ans=0;
        int p=dfs(root, ans);
        return p>2?ans+1:ans;
    }
};