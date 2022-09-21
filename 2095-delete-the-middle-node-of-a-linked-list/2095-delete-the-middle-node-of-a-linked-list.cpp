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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* temp1 = head;
        ListNode* temp2 = head;
        ListNode* beftemp1 = head;
        if (head->next == nullptr)
            return nullptr;
        if (head == nullptr)
            return nullptr;
        while(temp2!= NULL && temp2->next!=NULL)
        {
            beftemp1 = temp1;
            temp1 = temp1->next;
            temp2 = temp2->next->next;
        }
        beftemp1->next = temp1->next;
        return head;
    }
};
