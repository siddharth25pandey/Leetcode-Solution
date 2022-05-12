/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    
public:
   void helper(TreeNode* root, unordered_map<TreeNode*, TreeNode*>&m) // Basically storing the parent of each nodes
{
    if(!root) return ;
    if(root->left)
    {
        m.insert({root->left,root});
    }
    if(root->right)
    {
       m.insert({root->right,root});
    }
    helper(root->left,m);
    helper(root->right,m);
}
vector<int>distanceK(TreeNode* root, TreeNode* target, int k)
{
    queue<TreeNode*>q;
    vector<int>ans;
    unordered_map<TreeNode*,TreeNode*>m;
    helper(root,m);
    q.push(target);
    unordered_map<TreeNode*, bool>visit;
    while(!q.empty())
    {
        int len=q.size();
        while(len--)
        {
            TreeNode* curr=q.front();
            q.pop();
            if(!k)ans.push_back(curr->val);
            visit[curr]=true;
            if(curr->left and !visit[curr->left])
            {
                q.push(curr->left);
            }
            if(curr->right and !visit[curr->right])
            {
                q.push(curr->right);
            }
            if(m.find(curr)!=m.end() and visit[m[curr]]==false)
            {
                q.push(m[curr]);
            }

        }
        k--;
        if(k<0) break;
    }
    return ans;
}
  
};