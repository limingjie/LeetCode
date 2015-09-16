/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> v;
        preOrder(root, v, 0);
        return v;
    }

private:
    void preOrder(TreeNode* root, vector<int>& v, int level)
    {
        if (!root) return;
        if (v.size() == level) v.push_back(root->val);
        preOrder(root->right, v, level + 1);
        preOrder(root->left, v, level + 1);
    }
};
