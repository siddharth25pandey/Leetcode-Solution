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
    int max_check(TreeNode*root, int & maxi)
    {
        if(root==NULL) return 0;
        int l=max(max_check(root->left,maxi),0);
        int r=max(max_check(root->right,maxi),0);
        int new_value=root->val+l+r;
        maxi=max(maxi,new_value);
        return root->val+max(l,r);
    }
public:
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        int p=max_check(root,maxi);
        return maxi;
    }
};