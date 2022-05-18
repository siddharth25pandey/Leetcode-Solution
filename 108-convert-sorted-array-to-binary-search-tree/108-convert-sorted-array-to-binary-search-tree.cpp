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
    TreeNode* helper(vector<int>&v, int first, int end)
{
	if(first>=end)return NULL;
	int mid= first+(end-first)/2;
	TreeNode* ptr= new TreeNode(v[mid]);
	ptr->left=helper(v,first,mid);
	ptr->right=helper(v,mid+1,end);
        return ptr;
}

    TreeNode* sortedArrayToBST(vector<int>& v) {
        return helper(v,0,v.size());


    }
};