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
    vector<int> largestValues(TreeNode* root) {
        if(!root) return {};
        queue<TreeNode*>q;
        q.push(root);
        vector<int>ans;
        while(!q.empty())
        {
            int n=q.size();
            vector<int>v;
            while(n--)
            {
                TreeNode* ptr=q.front();
                q.pop();
                v.push_back(ptr->val);
                if(ptr->left)q.push(ptr->left);
                if(ptr->right)q.push(ptr->right);
            }
            ans.push_back(*max_element(v.begin(),v.end()));
        }
        return ans;
    }
};