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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // oneliner...
        // return p ? ((!q || p->val != q->val || !isSameTree(p->left, q->left) || !isSameTree(p->right, q->right)) ? false : true) : (q ? false : true);

        if (p)
        {
            // case 1 - p != NULL, but q == NULL
            // case 2 - p != NULL, q != NULL, but p->val != q->val
            // case 3 - same root, but different children.
            if (!q || p->val != q->val || !isSameTree(p->left, q->left) || !isSameTree(p->right, q->right)) return false;
        }
        else
        {
            // case 4 - p == NULL, but q != NULL
            if (q) return false;
        }

        return true;
    }
};
