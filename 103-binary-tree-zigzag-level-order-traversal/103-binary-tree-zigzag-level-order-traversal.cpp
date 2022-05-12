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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode*>q;
    q.push(root);
    vector<vector<int>>ans;
     if(!root) return ans;
        int c=0;
    while(!q.empty())
    {
        int len=q.size();
        vector<int>v;
        for(int i=1;i<=len;i++)
        {   
            
            TreeNode* ptr=q.front();
            q.pop();
            v.push_back(ptr->val);
            if(ptr->left)q.push(ptr->left);
            if(ptr->right)q.push(ptr->right);

        }
        if(c%2==1)
        {
            reverse(begin(v),end(v));
        }
        ans.push_back(v);
        c++;
    }
    return ans;
        
    }
};