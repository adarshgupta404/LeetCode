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
    void setNodes(ListNode* &node, ListNode* &prev, int n)
    {
        int pos = 1;
        while (pos!=n){
            pos++;
            prev = node;
            node = node->next;
        }
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
    ListNode* swapNodes(ListNode* head, int k) {
        if(head==NULL)
            return head;
        if(head->next == NULL)
            return head;
        
        int n = countNodes(head);
        // fix k
        if (k>n/2)
            k=n-k+1;
        // IF WE HAVE ODD NUMBER OF ELEMENTS, SWAPPING MIDDLE NODE DOESN'E MAKES SENSE
        if (n%2!=0 && k==(n+1)/2)  
            return head;

        if(k==1 || k==n)
        {
            ListNode* tail = head;
            ListNode* prev = head;
            while (tail->next!=NULL){
                prev = tail;
                tail=tail->next;
            }

            prev->next = head;  // Second last -> head
            tail->next = head->next; // last -> 2nd node
            head->next = NULL; // detach head, as it is the last node now
            
            return tail;    // Tail is the new head
        }
        else
        {

            // First node at pos k
            ListNode* firstNode=head , *firstNodePrev = head ;
            setNodes(firstNode,firstNodePrev,k) ;

            // Second node at position n-k+1
            ListNode* secondNode=head, *secondNodePrev = head;
            setNodes(secondNode,secondNodePrev,n-k+1) ;

            // IF ADJACENT NODES
            if (firstNode->next==secondNode){
                firstNode->next = secondNode->next;
                firstNodePrev->next = secondNode;
                secondNode->next = firstNode;
            }
            else{
                ListNode* temp = secondNode->next;
                secondNode->next = firstNode->next;
                firstNodePrev->next = secondNode;

                secondNodePrev->next = firstNode;
                firstNode->next = temp;
            }
        }
        return head;
    }
};