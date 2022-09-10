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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* res = new ListNode(0);
        ListNode* curr = res;
        int c = 0;
        while(c!=0||l1!=NULL||l2!=NULL)
        {
            int x = l1?l1->val:0;
            int y = l2?l2->val:0;
            int sum = x+y+c;
            c = sum/10;
            curr->next = new ListNode(sum%10);
            curr = curr->next;
            if(l1) l1 = l1->next;
            else l1 = NULL;
            if(l2) l2 = l2->next;
            else l2 = NULL;
        }
        return res->next;
    }
};