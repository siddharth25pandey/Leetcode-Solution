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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL) return ans;
        queue<TreeNode*> q;
        q.push(root);
        int c=1;
        while(!q.empty())
        {
            int n=q.size();
            vector<int>v;
            while(n--)
            {
                root=q.front();
                q.pop();
                v.push_back(root->val);
                if(root->left!=NULL)
                q.push(root->left);
                if(root->right!=NULL)
                q.push(root->right);
            }
            if(c%2==0)reverse(v.begin(),v.end());
            ans.push_back(v);
            c++;
            
        }
        return ans;
    }
};