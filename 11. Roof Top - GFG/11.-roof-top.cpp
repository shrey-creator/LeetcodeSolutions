// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to find maximum number of consecutive steps 
    //to gain an increase in altitude with each step.
    int maxStep(int A[], int N)
    {
        int prev_max=INT_MIN;
        int steps=0;
        for(int i=1;i<N;i++)
        {
            if(A[i-1]<A[i])
            {
                steps++;
            }
            else
            {
                if(steps>prev_max)
                prev_max=steps;
                steps=0;
            }
        }
         if(steps>prev_max)
                prev_max=steps;
        return prev_max;
       //Your code here
    }
};

// { Driver Code Starts.


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    Solution ob;
	    cout << ob.maxStep(a, n) << endl;
	}
	return 0;
}  // } Driver Code Ends