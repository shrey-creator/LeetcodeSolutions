// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};
// Utility function to create a new Tree Node
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}

vector<int> findSpiral(Node *root);

// Function to Build Tree
Node* buildTree(string str)
{
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if(currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if(currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


int main() {
    int t;
    string  tc;
    getline(cin,tc);
    t=stoi(tc);
    while(t--)
    {
        string s;
        getline(cin,s);
        Node* root = buildTree(s);

        vector<int> vec = findSpiral(root);
        for(int x : vec)
        cout<<x<<" ";
        cout << endl;
    }
    return 0;
}


// } Driver Code Ends


/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */


//Function to return a list containing the level order traversal in spiral form.
vector<int> findSpiral(Node *root)
{
    if(root==NULL)
    return {};
    vector<int> ans;
    queue<Node*> q;
    q.push(root);
    int current_level_nodes=0;
    int prev_level_nodes=1;
    vector<int> level_nodes;
    int revers=1;
    while(!q.empty())
    {
        Node* temp=q.front();
        level_nodes.push_back(temp->data);
        q.pop();
        if(temp->left)
        {
            q.push(temp->left);
            current_level_nodes++;
        }
        if(temp->right)
        {
            q.push(temp->right);
            current_level_nodes++;
        }
        prev_level_nodes--;
        if(prev_level_nodes==0)
        {
            if(revers)
            {
                revers=0;
                reverse(level_nodes.begin(),level_nodes.end());
            }
            else
            revers=1;
            
            prev_level_nodes=current_level_nodes;
            current_level_nodes=0;
            for(int i=0;i<level_nodes.size();i++)
            ans.push_back(level_nodes[i]);
            // ans.fill(level_nodes.begin(),level_nodes.end());
            level_nodes.clear();
        }
        
    }
    // ans.push_back(level_nodes);
    return ans;
 
    //Your code here
}
