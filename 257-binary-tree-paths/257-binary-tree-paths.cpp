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
    void sid(TreeNode* root, vector<string>&ans, string s)
    {
        if(!root) return;
        if(root->left or root->right)s+=(to_string(root->val)+"->");
        else 
        {
            s+=(to_string(root->val));
            ans.push_back(s);
        }
        sid(root->left,ans,s);
        sid(root->right,ans,s);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
       vector<string>ans;
        string p;
        sid(root,ans,p);
        return ans;
    }
};