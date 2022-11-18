//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}



// } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
Node *reverse(Node* head)
{
    Node *before = NULL;
    Node *after = NULL;
    while (head != NULL)
    {
        after = head->next;
        head->next = before;
        before = head;
        head = after;
    }
    head = before;
    return head;
}
class Solution
{
    public:
    Node *compute(Node *head)
    {
        // your code goes here
        if(head == NULL || head->next == NULL)
            return head;
        head = reverse(head);
        Node* temp = head->next, *ptemp = head;
        int max = temp->data;
        while(temp!=NULL)
        {
            while(temp && ptemp->data>temp->data)
            {
                Node *t = temp;
                temp = temp->next;
                delete(t);
                ptemp->next = temp;
            }
            if(!temp)   
                break;
            ptemp = temp;
            temp = temp->next;
        }
        head = reverse(head);
        return head;
    }
    
};
   


//{ Driver Code Starts.

int main()
{
    int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;

		for(int i=0;i<K;i++){
		    int data;
		    cin>>data;
			if(head==NULL)
			    head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}
        Solution ob;
        Node *result = ob.compute(head);
        print(result);
        cout<<endl;
    }
}

// } Driver Code Ends