// { Driver Code Starts
#include<iostream>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node *next;
    
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node* sortedMerge(struct Node* a, struct Node* b);

/* Function to print Nodes in a given linked list */
void printList(struct Node *n)
{
    while (n!=NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}

/* Driver program to test above function*/
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;

        int data;
        cin>>data;
        struct Node *head1 = new Node(data);
        struct Node *tail1 = head1;
        for (int i = 1; i < n; ++i)
        {
            cin>>data;
            tail1->next = new Node(data);
            tail1 = tail1->next;
        }

        cin>>data;
        struct Node *head2 = new Node(data);
        struct Node *tail2 = head2;
        for(int i=1; i<m; i++)
        {
            cin>>data;
            tail2->next = new Node(data);
            tail2 = tail2->next;
        }

        Node *head = sortedMerge(head1, head2);
        printList(head);
    }
    return 0;
}
// } Driver Code Ends


 

/* Link list Node
struct Node {
  int data;
  struct Node *next;
  
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
//Function to merge two sorted linked list.
Node* sortedMerge(Node* head1, Node* head2)  
{  
    Node* head=NULL;
    Node* temp=head;
    while(head1!=NULL && head2!=NULL)
    {
        if(head1->data<head2->data)
        {
            Node* p=new Node(head1->data);
            if(head==NULL)
            {
                head=p;
                temp=head;
            }
            else
            {
                temp->next=p;
                temp=temp->next;
            }
            head1=head1->next;
        }
        else
        {
            Node* p=new Node(head2->data);
            if(head==NULL)
            {
                head=p;
                temp=head;
            }
            else
            {
                temp->next=p;
                temp=temp->next;
            }
            head2=head2->next;
        }
    }
    while(head1!=NULL)
    {Node* p=new Node(head1->data);
    temp->next=p;
                temp=temp->next;
                head1=head1->next;
        
    }
    while(head2!=NULL)
    {
        Node* p=new Node(head2->data);
    temp->next=p;
        temp=temp->next;
        head2=head2->next;
        
    }
    return head;
    // code here
}  