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
    ListNode* reverseList(ListNode* head) {
        ListNode* before = NULL;
        ListNode* after; 
          while(head!=NULL)
          {
              after = head->next;
              head->next = before;
              before = head;
              head = after;
          }
        head = before;
        return head;
    }
};
