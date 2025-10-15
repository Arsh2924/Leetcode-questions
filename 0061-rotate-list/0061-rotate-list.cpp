/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
         if (!head || !head->next || k == 0)
            return head;

        // Step 1: Find the length and get tail
        ListNode* tail = head;
        int len = 1;
        while (tail->next) {
            tail = tail->next;
            len++;
        }

        // Step 2: Connect tail to head (make circular)
        tail->next = head;

        // Step 3: Find the new tail position
        k = k % len;
        int stepsToNewTail = len - k - 1;

        ListNode* newTail = head;
        for (int i = 0; i < stepsToNewTail; i++)
            newTail = newTail->next;

        // Step 4: Set new head and break circle
        ListNode* newHead = newTail->next;
        newTail->next = NULL;

        return newHead;
    }
};

  