/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
    private:
    ListNode* intersectionpoint(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next;
            if(fast!=NULL){
                fast=fast->next;
            }
            slow = slow->next;
            if(slow==fast){
                return slow;
            }
        }
        return NULL;
    }
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL){
            return NULL;
        }
        ListNode* intersection = intersectionpoint(head); 
        if(intersection==NULL){
            return NULL;
        }
        ListNode* slow = head;
        while(slow!=intersection){
            slow=slow->next;
            intersection=intersection->next;
        }
            if(slow==intersection){
                return true;
            }else{
                return false;
            }
    }
};