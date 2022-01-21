// { Driver Code Starts
//Initial Template for C

#include <stdio.h>


 // } Driver Code Ends
//User function Template for C

int digitalRoot(int n)
{
    if(n<=9)
    return n;
    return digitalRoot(sum(n));
   
    //Your code here
}

int sum(int n)
{
     if(n==0)
    return 0;
    
    return n%10+sum(n/10);
}

// { Driver Code Starts.


int main() {
	int T;
	scanf("%d", &T);//taking testcases
	while(T--)
	{
	    int n;
	    scanf("%d", &n);//taking number n
	    
	    //calling digitalRoot() function
	    printf("%d\n", digitalRoot(n));
	    
	    
	}
	return 0;
}  // } Driver Code Ends