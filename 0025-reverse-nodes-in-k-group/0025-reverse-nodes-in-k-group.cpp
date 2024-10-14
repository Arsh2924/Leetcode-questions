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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head == NULL || k == 1) return head;  
      ListNode* curr = head;
        int count = 0;
        while (curr != NULL && count < k) {
            curr = curr->next;
            count++;
        }

        // If there are fewer than 'k' nodes left, return the head without reversing
        if (count < k) return head;
     //ListNode* curr = head;
     ListNode* prev = NULL;
    ListNode* next = NULL;
    

    // Reverse the first 'k' nodes
    while (curr != NULL && count < k) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    // 'head' is now the last node in the reversed section, so link it to the next part of the list
    if (next != NULL) {
        head->next =reverseKGroup(next, k);  // Recurse for the remaining list
    }

    // 'prev' is the new head of this segment
    return prev;
    }
};