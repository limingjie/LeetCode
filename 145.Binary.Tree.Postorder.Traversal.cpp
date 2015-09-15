/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void postorderTraversalNode(TreeNode *root, vector<int> &v) {
    if (root != NULL)
    {
        postorderTraversalNode(root->left, v);
        postorderTraversalNode(root->right, v);
        v.push_back(root->val);
    }
}

class Solution {
public:
    vector<int> postorderTraversal(TreeNode *root) {
        vector<int> v;
        postorderTraversalNode(root, v);
        return v;
    }
};
