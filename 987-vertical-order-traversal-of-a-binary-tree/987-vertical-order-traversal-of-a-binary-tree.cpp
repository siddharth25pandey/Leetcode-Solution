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
    queue<pair<TreeNode*, int>>q;
    q.push({root,0});
    while(!q.empty())
    {
        int n=q.size();
        multiset<pair<int,int>>s;
        while(n--)
        {
            auto i=q.front();
            q.pop();
            s.insert({i.second,i.first->val});
            if(i.first->left)q.push({i.first->left,i.second-1});
            if(i.first->right)q.push({i.first->right,i.second+1});
        }
        for(auto i:s)
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