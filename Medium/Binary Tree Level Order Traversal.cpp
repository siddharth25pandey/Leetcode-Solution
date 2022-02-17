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
    vector<vector<int>> levelOrder(TreeNode* root) {
      vector<vector<int>>ans;
        if(root==NULL) return ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {   int size=q.size();
            vector<int>v;
            for(int i=0;i<size;i++)
            {    
            TreeNode *ele=q.front();
              q.pop();
                 v.push_back(ele->val);
                if(ele->left!=NULL)q.push(ele->left);
                if(ele->right!=NULL)q.push(ele->right);
                
            }
         ans.push_back(v);
        
        }
        return ans;
        
        
    }
};