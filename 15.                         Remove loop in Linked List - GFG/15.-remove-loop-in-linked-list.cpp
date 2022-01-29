// { Driver Code Starts
// driver code

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void loopHere(Node* head, Node* tail, int position)
{
    if(position==0) return;
    
    Node* walk = head;
    for(int i=1; i<position; i++)
        walk = walk->next;
    tail->next = walk;
}

bool isLoop(Node* head)
{
    if(!head) return false;
    
    Node* fast = head->next;
    Node* slow = head;
    
    while( fast != slow)
    {
        if( !fast || !fast->next ) return false;
        fast=fast->next->next;
        slow=slow->next;
    }
    
    return true;
}

int length(Node* head)
{
    int ret = 0;
    while(head)
    {
        ret++;
        head = head->next;
    }
    return ret;
}


 // } Driver Code Ends
/*
structure of linked list node:

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        Node* s=head;
        Node* f=head;
        int flag=0;
        while(f && f->next)
        {
            s=s->next;
            f=f->next->next;
            if(s==f)
            {
                flag=1;
                break;
            }
            
        }
        if(flag==1)
        {
            int count=0;
            while(1)
            {
                s=s->next;
                count++;
                if(s==f)
                break;
            }
            Node* ptr1=head;
            Node* ptr2=head;
            for(int i=1;i<=count;i++)
            {
                ptr2=ptr2->next;
            }
            Node* prev=ptr2;
            while(ptr1!=ptr2)
            {
                // prev=ptr2;
                ptr1=ptr1->next;
                ptr2=ptr2->next;
            }
            while (ptr2->next != ptr1)
                 ptr2 = ptr2->next;
        ptr2->next = NULL;
            // prev->next=NULL;
        }
        // code here
        // just remove the loop without losing any nodes
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, num;
        cin>>n;
        
        Node *head, *tail;
        cin>> num;
        head = tail = new Node(num);
        
        for(int i=0 ; i<n-1 ; i++)
        {
            cin>> num;
            tail->next = new Node(num);
            tail = tail->next;
        }
        
        int pos;
        cin>> pos;
        loopHere(head,tail,pos);
        
        Solution ob;
        ob.removeLoop(head);
        
        if( isLoop(head) || length(head)!=n )
            cout<<"0\n";
        else
            cout<<"1\n";
    }
	return 0;
}
  // } Driver Code Ends