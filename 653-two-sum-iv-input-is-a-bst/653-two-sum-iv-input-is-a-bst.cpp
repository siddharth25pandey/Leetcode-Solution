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
    void inorder(TreeNode* root, vector<int>&a)
    {   if(root==NULL) return;
        if(root->left!=NULL)inorder(root->left,a);
        a.push_back(root->val);
         if(root->right!=NULL)inorder(root->right,a);
       
    }
public:
    bool findTarget(TreeNode* root, int k) {
        vector<int>v;
        TreeNode* p=root;
        inorder(p,v);
        /*for(auto i:v)
        {
            cout <<i<<" ";
        }
        cout <<endl;*/
        unordered_map<int,int>m;
        
        if(v.size()==1)return false;
        for(int i=0;i<v.size();i++)
        {
            if(m.find(k-v[i])!=m.end())
            {
                cout<<v[i]<<endl;
                return true;
                
            }
            m[v[i]]++;
            
        }
        return false;
    }
};