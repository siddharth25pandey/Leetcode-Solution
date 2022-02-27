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
    int widthOfBinaryTree(TreeNode* root) {
       if (!root)
        return 0;
    queue<pair<TreeNode *,unsigned long long int>> q;
    q.push({root,0});
        int width = 0;
    while (!q.empty())
    {   unsigned long long int left = q.front().second, right = 0;
        int n = q.size();
    
        while (n--)
        {
            pair<TreeNode *, unsigned long long int>node = q.front();
            q.pop();
           right=node.second;
            if (node.first->left )
                q.push({node.first->left,2*node.second+1});
            if (node.first->right )
                q.push({node.first->right,2*node.second+2});
        }
        
     	width = max(width, int(right - left + 1));
    }
        return width;
    }
};