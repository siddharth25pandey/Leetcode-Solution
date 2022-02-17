#include <bits/stdc++.h>
using namespace std;
/**
 * Definition for a binary tree node.*/
  struct TreeNode {
      int val;
    TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
 
class Solution {
    public:
    bool check(TreeNode* root,TreeNode* l=NULL, TreeNode* r=NULL)
    {
        if(root==NULL)
     {
         return true;
     }
      if(l!=NULL and (root->val)<=(l->val))
      {
          return false;
      }
         if(r!=NULL and (root->val)>=(r->val))
      {
          return false;
      }
        return (check(root->left,l,root) and check(root->right,root,r));
        }
public:
    bool isValidBST(TreeNode* root) {
        return check(root,NULL,NULL);
    }
};