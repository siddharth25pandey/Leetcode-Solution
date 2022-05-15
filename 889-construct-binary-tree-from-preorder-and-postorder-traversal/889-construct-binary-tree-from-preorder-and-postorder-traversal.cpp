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
    TreeNode* helper(vector<int>& preorder, unordered_map<int,int>&m, int& pre_index)
{
    int curr=preorder[pre_index];
    TreeNode* ptr = new TreeNode(curr);
    pre_index++;
    if(pre_index<preorder.size() and m[preorder[pre_index]]<m[curr])
    {
        ptr->left= helper(preorder,m,pre_index);
    }
  
  if(pre_index<preorder.size() and m[preorder[pre_index]]<m[curr])
    {
        ptr->right= helper(preorder,m,pre_index);
  }
    return ptr;
}
    TreeNode* constructFromPrePost(vector<int>& pre, vector<int>& postorder) {
        
       unordered_map<int, int>m;
    for(int i=0;i<postorder.size();i++)
    {
        m[postorder[i]]=i;
    }
    int pre_index=0;
    return helper(pre, m,pre_index);
        
    }
};