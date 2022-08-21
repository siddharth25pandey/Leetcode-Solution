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
    int xdepth,ydepth,xparent,yparent;
    void depth(TreeNode* root, int x, int y, int parlevel, int dep)
    {
        if(!root)return ;
        if(root->val==x)
        {
            xdepth=dep;
            xparent=parlevel;
            return;
        }
        if(root->val==y)
        {
            ydepth=dep;
            yparent=parlevel;
            return;
        }
        depth(root->left,x,y,root->val,dep+1);
        depth(root->right,x,y,root->val,dep+1);
    }
    
    bool isCousins(TreeNode* root, int x, int y) {
        if(root->val==x or root->val==y)return false;
        depth(root,x,y,0,0);
        if(xdepth==ydepth and xparent!=yparent)return true;
        
        return false;
    }
};