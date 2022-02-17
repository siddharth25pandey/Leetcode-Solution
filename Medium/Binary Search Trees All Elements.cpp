#include <bits/stdc++.h>
using namespace std;
/**
 * Definition for a binary tree node.*/
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
    void inorder(TreeNode* root, vector<int>&v)
    {   if(root==NULL) return;
        if(root->left!=NULL)inorder(root->left,v);
        v.push_back(root->val);
         if(root->right!=NULL)inorder(root->right,v);
    }
public:
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>p;
        vector<int>q;
        inorder(root1,p);
        inorder(root2,q);
        vector<int>ans;
        for(auto i:p)
        {
            ans.push_back(i);
        }
         for(auto i:q)
        {
            ans.push_back(i);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};