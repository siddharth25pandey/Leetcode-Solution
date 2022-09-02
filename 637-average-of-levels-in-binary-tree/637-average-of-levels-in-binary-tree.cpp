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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            double n=q.size();
            vector<double>v;
            while(n--)
            {
                TreeNode* ptr= q.front();
                q.pop();
                v.push_back(ptr->val);
                if(ptr->left)q.push(ptr->left);
                if(ptr->right)q.push(ptr->right);
            }
           double total=0;
         for(auto j:v)
             total+=j;
         double r=total/v.size();
         ans.push_back(r);
        }
        return ans;
    }
};