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
    int getCount(ListNode* head)
    {
        int count = 0;
        ListNode* temp = head;
        while(temp!=NULL)
        {
            count++;
            temp = temp->next;
        }
        return count;
    }
    ListNode* getIntersectionNode(ListNode *headA, ListNode *headB) {
        int c1 = getCount(headA);
        int c2 = getCount(headB);
        ListNode* curr1 = headA;
        ListNode* curr2 = headB;
        int d;
        if(c1>c2)
        {
            d = c1-c2;
            curr1 = headA;
            curr2 = headB;
        }
        else
        {
            d = c2-c1;
            curr1 = headB;
            curr2 = headA;
        }
        for(int i = 0; i<d; i++)
        {
            if(curr1==NULL)
                return NULL;
            curr1 = curr1->next;
        }
        while(curr1!=NULL&&curr2!=NULL)
        {
            if(curr1==curr2)
            {
                return curr1;
            }
            curr1 = curr1->next;
            curr2 = curr2->next;
        }
        return NULL;
    }
};