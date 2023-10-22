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
 // Divide the list by half
 // Reverse the second half
 // Reorder via while loop condition head and second
 // if(head && head->next exists) then head->next->next = NULL;
class Solution {
public:
    void reorderList(ListNode* head) {
        if(head==NULL || head->next==NULL) return;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        if(fast->next)  slow = slow->next;
        ListNode* before = NULL;
        ListNode* after = NULL;
        while(slow){
            after = slow->next;
            slow->next = before;
            before = slow;
            slow = after;
        }
        ListNode* second = before;
        ListNode* firstnext = NULL;
        ListNode* secondnext = NULL;
        while(head && second){
            firstnext = head->next;
            secondnext = second->next;
            head->next = second;
            second->next = firstnext;
            head = firstnext;
            second = secondnext;
        }
        if(head && head->next)
            head->next->next = NULL;
    }
};