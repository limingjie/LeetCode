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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        int count = 0;
        return depthFirst(root, p, q, count);
    }
private:
    TreeNode* depthFirst(TreeNode* node, TreeNode* p, TreeNode* q, int &count)
    {
        static TreeNode* found = NULL;
        if (!node) return NULL;

        int cl = 0, cr = 0;

        if (depthFirst(node->left, p, q, cl) != NULL) return found;
        if (depthFirst(node->right, p, q, cr) != NULL) return found;
        if (node == p || node == q) count = 1;

        count += cl + cr;
        if (count == 2)
        {
            found = node;
            return found;
        }

        return NULL;
    }
};
