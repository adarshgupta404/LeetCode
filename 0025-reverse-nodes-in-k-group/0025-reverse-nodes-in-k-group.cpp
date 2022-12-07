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
int length(ListNode * node){
    int count=0;
    while(node){
        count++;
        node=node->next;
    }
    return count;
}
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(length(head) < k)
            return head;
        ListNode* curr = head,*next = NULL, *prevFirst = NULL;
        bool isFstPass = true;
        int numberOfGroupsToReverse = length(head)/k;
        while(curr!=NULL)
        {
            ListNode* first = curr, *prev = NULL;
            int count = 0;
            while(curr!=NULL && count<k)
            {
                next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next;
                count++;
            }
            if(isFstPass)
            {
                head = prev;
                isFstPass = false;
            }
            else
            {
                prevFirst->next = prev;
            }
            prevFirst = first;
            numberOfGroupsToReverse--;
            if(numberOfGroupsToReverse==0)
            {
                prevFirst->next = next;
                break;
            }
        }
        return head;
    }
};