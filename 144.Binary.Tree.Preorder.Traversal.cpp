/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> preorderTraversal(TreeNode *root) {
        vector<int> result;
        stack<TreeNode *> s;
        TreeNode *current;

        if (root)
        {
            s.push(root);
            while (!s.empty())
            {
                current = s.top();
                s.pop();
                result.push_back(current->val);

                if (current->right != NULL) s.push(current->right);
                if (current->left != NULL) s.push(current->left);
            }
        }

        return result;
    }
};
