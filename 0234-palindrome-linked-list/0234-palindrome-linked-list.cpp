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
    // Function to find the middle of the list
    ListNode* findMiddle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    // Function to reverse the list
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while (curr != nullptr) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

public:
    bool isPalindrome(ListNode* head) {
        // Edge case: empty or single element list
        if (head == nullptr || head->next == nullptr) {
            return true;
        }

        // Step 1: Find the middle of the list
        ListNode* middle = findMiddle(head);

        // Step 2: Reverse the second half of the list
        ListNode* reversedSecondHalf = reverseList(middle);

        // Step 3: Compare the two halves
        ListNode* firstHalf = head;
        ListNode* secondHalf = reversedSecondHalf;
        while (secondHalf != nullptr) {
            if (firstHalf->val != secondHalf->val) {
                return false;
            }
            firstHalf = firstHalf->next;
            secondHalf = secondHalf->next;
        }

        // Step 4: Optional - Restore the reversed second half (if required)
        // middle->next = reverseList(reversedSecondHalf);

        return true;
    }
};