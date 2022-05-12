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
   /* void helper(TreeNode* root, unordered_map<TreeNode*,TreeNode*>&m)
    {
        if(!root) return;
        if(root->left)
        {
            m.insert({root->left,root});
        }
        else 
        {
            m.insert({root->right,root});
        }
        helper(root->left,m);
        helper(root->right,m);
    }*/
    void dfs(TreeNode* root, unordered_map<TreeNode*, TreeNode*>& m) {
        if(!root) return;
        if(root->left) {
            m.insert({root->left, root});
        }
        if(root->right) {
            m.insert({root->right, root});
        }
        dfs(root->left, m);
        dfs(root->right, m);
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        vector<int>ans;
        queue<TreeNode*>q;
        unordered_map<TreeNode*,TreeNode*>m;
        dfs(root,m);
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
         /*unordered_map<TreeNode*, TreeNode*> m; //{current, parent}
        queue<TreeNode*> q;
        dfs(root, m);
        q.push(target);
        vector<int> res;
        unordered_map<TreeNode*, bool> visited;
        while(!q.empty()) {
            int len = q.size();
            while(len--) {
                TreeNode* curr = q.front(); q.pop();
                if(!k) res.push_back(curr->val);
                visited[curr] = true;
                if(curr->left && !visited[curr->left]) {
                    q.push(curr->left);
                }
                if(curr->right && !visited[curr->right]) {
                    q.push(curr->right);
                }
                if(m.find(curr) != m.end() && visited[m[curr]] == false) {
                    q.push(m[curr]);
                }
            }
            k--;
            if(k < 0) break;
        }
        return res;*/
    }
  
};