/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  struct TreeLinkNode *left, *right, *next;
 * };
 *
 */
void connect(struct TreeLinkNode *root) {
    if (!root) return;

    while (root->left)
    {
        struct TreeLinkNode *p = root;
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
