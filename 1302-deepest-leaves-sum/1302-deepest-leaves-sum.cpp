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
    int deepestLeavesSum(TreeNode* root) {
       
        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);
        int ans=root->val;
        int curr=0;
        while(!q.empty())
        {
           
            
                TreeNode* ptr=q.front();
                q.pop();
                if(!ptr){
                ans = curr;
                curr= 0;
                 q.push(NULL);
                if(q.front()==NULL)break;
              
                continue;
            }
            curr+=ptr->val;
             if(ptr->left)q.push(ptr->left);
            if(ptr->right)q.push(ptr->right); 
        }
        
        return ans;
    }
};