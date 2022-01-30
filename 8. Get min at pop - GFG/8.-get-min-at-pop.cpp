// { Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;

stack<int> _push(int arr[],int n);

void _getMinAtPop(stack<int>s);

 // } Driver Code Ends
//User function Template for C++


//Function to push all the elements into the stack.
stack<int> min_till;
stack<int> _push(int arr[],int n)
{
    stack<int> st;
    int mini=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<mini)
        mini=arr[i];
        st.push(arr[i]);
         min_till.push(mini);
    }
    return st;
   // your code here
}

//Function to print minimum value in stack each time while popping.
void _getMinAtPop(stack<int>s)
{
    while(!min_till.empty())
    {
        cout<<min_till.top()<<" ";
        min_till.pop();
        s.pop();
    }
    // your code here
}

// { Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    stack<int>mys=_push(arr,n);
	    _getMinAtPop(mys);
	    
	    cout<<endl;
	    
	}
	return 0;
}

  // } Driver Code Ends