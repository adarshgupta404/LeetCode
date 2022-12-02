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
    ListNode* lastnode(ListNode* head)
    {
        ListNode* temp = head;
        while(temp->next->next!=NULL)
        {
            temp = temp->next;
        }
        return temp;
    }
    int countNodes(ListNode* head)
    {
        int c = 0;
        ListNode* temp = head;
        while(temp!=NULL)
        {
            temp = temp->next;
            c++;
        }
        return c;
    }
    ListNode* kthFromEnd(ListNode* head, int k) {
        ListNode* fast = head;
        ListNode* slow = head;
        while(k--)
        {
            fast=fast->next;
        }
        if(!fast)
            return head->next;
        while(fast->next)
        {
            fast = fast->next;
            slow = slow->next;
        }
        return slow;
    }
    ListNode* kthFromStart(ListNode* head, int k)
    {
        ListNode* fast = head;
        while(k>2)
        {
            fast=fast->next;
            k--;
        }
        return fast;
    }
    ListNode* swapNodes(ListNode* head, int k) {
        if(head==NULL)
            return head;
        if(head->next == NULL)
            return head;
        int n = countNodes(head);
        if(k==1 || k==n)
        {
            if(head->next->next==NULL)
            {
                ListNode* temp = head;
                temp = temp->next;
                temp->next = head;
                head->next = NULL;
                head = temp;
            }
            else
            {
                ListNode* temp = head->next;
                ListNode* tail = lastnode(head);
                ListNode* last = tail->next;
                last->next = temp;
                tail->next = head;
                head->next = NULL;
                head = last;   
            }
        }
        else
        {
        if (k>n/2)
            k=n-k+1;
        // IF WE HAVE ODD NUMBER OF ELEMENTS, SWAPPING MIDDLE NODE DOESN'E MAKES SENSE
        if (n%2!=0 && k==(n+1)/2)  
            return head;
        ListNode* kthnodebehind = kthFromStart(head, k);
        ListNode* lkthnodebehind = kthFromEnd(head, k);
        ListNode* kthnode = kthnodebehind->next;
        ListNode* lkthnode = lkthnodebehind->next;
        ListNode* kthnodenext = kthnodebehind->next->next;
        ListNode* lkthnodenext = lkthnodebehind->next->next;
        
        if(kthnode == lkthnodebehind)
        {
            kthnodebehind->next = lkthnode;
            kthnode->next = lkthnode->next;
            lkthnode->next = kthnode;
        }
        else
        {
            kthnodebehind->next = lkthnode;
            kthnode->next = lkthnodenext;
            lkthnode->next = kthnodenext;
            lkthnodebehind->next = kthnode;
        }
        }
        return head;
    }
};