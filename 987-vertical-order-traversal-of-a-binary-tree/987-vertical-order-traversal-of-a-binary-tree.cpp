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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>>ans;
        map<int,vector<int>>m;
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        while(!q.empty())
        {
            int n=q.size();
            multiset<pair<int,int>>p;
            while(n--)
            {
                
                auto z=q.front();
                q.pop();
                p.insert({z.second,z.first->val});
                if(z.first->left)q.push({z.first->left,z.second-1});
                 if(z.first->right)q.push({z.first->right,z.second+1});
                 
            }
            for(auto i:p)
            {
                m[i.first].push_back(i.second);
            }
        }
        for(auto i:m)
        {
            ans.push_back(i.second);
        }
        return ans;
    }
};