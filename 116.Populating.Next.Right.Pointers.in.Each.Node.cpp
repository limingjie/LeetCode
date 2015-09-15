/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */

// Use the next pointer
class Solution {
public:
    void connect(TreeLinkNode *root) {
        if (!root) return;

        while (root->left)
        {
            TreeLinkNode *p = root;
            while (p)
            {
                p->left->next = p->right;
                if (p->next)
                    p->right->next = p->next->left;
                p = p->next;
            }

            root = root->left;
        }
    }
};

// Use queue, but the space complexity is not O(1)
class Solution {
public:
    void connect(TreeLinkNode *root) {
        queue<TreeLinkNode*> q;
        q.push(root);
        q.push(NULL);

        TreeLinkNode* last = NULL;
        TreeLinkNode* first;
        while (!q.empty())
        {
            first = q.front();
            q.pop();
            if (first)
            {
                if (first->left)
                {
                    q.push(first->left);
                    q.push(first->right);
                }
            }
            else
            {
                if (last) q.push(NULL);
            }

            if (last)
            {
                last->next = first;
            }

            last = first;
        }
    }
};
