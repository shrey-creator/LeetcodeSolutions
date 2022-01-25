// { Driver Code Starts
//Initial Template for C

#include <stdio.h>


 // } Driver Code Ends
//User function Template for C


//Function to find the minimum element in sorted and rotated array.
int minNumber(int arr[], int low, int high)
{
    // Your code here
    int ans=-1;
    int first=arr[0];
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(mid-1>=0 && arr[mid-1]<arr[mid] && arr[mid]>first)
        {
            low=mid+1;
        }
        else if(mid-1>=0 && arr[mid-1]<arr[mid] && arr[mid]<first)
        {
            high=mid-1;
        }
        else
        {
            ans=arr[mid];
            break;
        }
    }
    if(first<ans || ans==-1)
    ans=first;
    return ans;
    
}

// { Driver Code Starts.

int main()
{
	
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		int a[n];
		for(int i=0;i<n;++i)
			scanf("%d", &a[i]);	
	
		printf("%d\n", minNumber(a,0,n-1) );
	}
	return 0;
}  // } Driver Code Ends