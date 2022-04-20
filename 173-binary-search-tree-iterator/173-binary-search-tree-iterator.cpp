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
class BSTIterator {
public:
    stack<TreeNode*>st;
    void LeftTree(TreeNode* root)
    {
        TreeNode* ptr=root;
        while(ptr!=NULL)
        {
            st.push(ptr);
            ptr=ptr->left;
        }
    }
    BSTIterator(TreeNode* root) {
        LeftTree(root);
    }
    
    int next() {
        TreeNode* top= st.top();
        st.pop();
        if(top->right!=NULL)
        {
            LeftTree(top->right);
        }
        return top->val;
    }
    
    bool hasNext() {
        if(st.empty()) return false;
        return true;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */