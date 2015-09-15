/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || k == 0) return head;

        ListNode* slow = head;
        ListNode* fast = head;

        int distance = 0;

        // move fast pointer to kth position ahead of slow pointer
        while (fast->next && distance < k)
        {
            fast = fast->next;
            distance++;
        }

        // if k greater than list length, redo it with k % length.
        if (distance < k)
        {
            return rotateRight(head, k % (distance + 1));
        }

        // move the slow pointer to find the new tail and head.
        while (fast->next)
        {
            fast = fast->next;
            slow = slow->next;
        }

        // rotate the list.
        fast->next = head;
        head = slow->next;
        slow->next = NULL;

        return head;
    }
};
