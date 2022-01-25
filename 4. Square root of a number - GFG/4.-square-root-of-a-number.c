// { Driver Code Starts
//Initial Template for C

#include<stdio.h>
  

 // } Driver Code Ends
//User function Template for C

long long int floorSqrt(long long int x) 
{
    if(x==0 || x==1)
    return x;
    long  long int l=1;
    long long int r=x;
    long long ans =0;
    while(l<=r)
    {
        long long int mid=(l+r)/2;
        if((mid*mid)<=x)
        {
            ans=mid;
            l=mid+1;
            
        }
        else if((mid*mid)>x)
        {
            r=mid-1;
        }
    }
    return ans;
    // Your code goes here   
}

// { Driver Code Starts.

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		long long n;
		scanf("%ld", &n);
	
		printf("%ld\n", floorSqrt(n));
	}
    return 0;   
}
  // } Driver Code Ends