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
private:
    // Function to insert a new node at the tail of the linked list
    void insertAtTail(ListNode* &head, ListNode* &tail, int val) {
        ListNode* temp = new ListNode(val);
        // If the list is empty
        if (head == NULL) {
            head = temp;
            tail = temp;
        } else {
            tail->next = temp;
            tail = temp;
        }
    }

    // Function to reverse the nodes of a linked list
    ListNode* reverse(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* next = NULL;
        while (curr != NULL) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    // Function to add two numbers represented by two linked lists
    ListNode* add(ListNode* first, ListNode* second) {
        int carry = 0;
        ListNode* ansHead = NULL;
        ListNode* ansTail = NULL;

        // Add corresponding digits of both lists
        while (first != NULL || second != NULL || carry != 0) {
            int val1 = 0;
            if (first != NULL) val1 = first->val;
            
            int val2 = 0;
            if (second != NULL) val2 = second->val;

            int sum = carry + val1 + val2;
            int digit = sum % 10;

            // Insert the digit into the result list
            insertAtTail(ansHead, ansTail, digit);

            carry = sum / 10;
            if (first != NULL) first = first->next;
            if (second != NULL) second = second->next;
        }

        return ansHead;
    }

public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // Step 1 - Reverse the input linked lists
        l1 = reverse(l1);
        l2 = reverse(l2);

        // Step 2 - Add the two reversed linked lists
        ListNode* ans = add(l1, l2);

        // Step 3 - Reverse the result to get the final answer
       // ans = reverse(ans);

        return ans;
    }
};
