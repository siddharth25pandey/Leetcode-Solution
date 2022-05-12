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
   void helper(TreeNode* root, unordered_map<TreeNode*,TreeNode*>&m)
    {
        if(!root) return;
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
   
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        vector<int>ans;
        queue<TreeNode*>q;
        unordered_map<TreeNode*,TreeNode*>m;
        helper(root,m);
        q.push(target);
        unordered_map<TreeNode*,bool>visit;
        while(!q.empty())
        {
            int len=q.size();
           
            while(len--)
            {    TreeNode* ptr=q.front();
                    q.pop();
                if(!k)ans.push_back(ptr->val);
                visit[ptr]=true;
                if(ptr->left and !visit[ptr->left])
                {
                    q.push(ptr->left);
                }
                 if(ptr->right and !visit[ptr->right])
                {
                    q.push(ptr->right);
                }
                if(m.find(ptr)!=m.end() and visit[m[ptr]]==false)
                {
                    q.push(m[ptr]);
                }
                
            }
            k--;
            if(k<0) break;
        }
          return ans;
         
    }
  
};