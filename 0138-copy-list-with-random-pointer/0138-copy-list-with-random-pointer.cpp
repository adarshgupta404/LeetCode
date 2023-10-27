/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (head == NULL) return NULL;
        Node* curr = head;
        while(curr!=NULL)
        {
            Node* next = curr->next;
            curr->next = new Node(curr->val);
            curr->next->next = next;
            curr = next;
        }
        
        for(Node* curr = head; curr!=NULL; curr = curr->next->next)
        {
            if(curr->random)
                curr->next->random=curr->random->next;
        }
        
        Node* original = head; 
        Node *temp = head->next; 
        for(Node* copy = head->next; copy!=NULL && original!=NULL; copy = copy->next) 
        { 
            original->next = 
            original->next? original->next->next : original->next; 
            copy->next = copy->next?copy->next->next:copy->next; 
            original = original->next; 
        } 
        return temp;   
    }
};