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
    bool isValidBST(TreeNode* root) {
        TreeNode* prev = NULL;
        return isValidBSTPrev(root, prev);
    }

    bool isValidBSTPrev(TreeNode* root, TreeNode*& prev)
    {
        if (root == NULL) return true;

        if (!isValidBSTPrev(root->left, prev)) return false;

        if (prev != NULL && root->val <= prev->val) return false;

        prev = root;

        return isValidBSTPrev(root->right, prev);
    }
};
