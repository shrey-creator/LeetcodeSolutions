// { Driver Code Starts
//Initial Template for C

#include <stdio.h>
#include <stdbool.h>


 // } Driver Code Ends
//User function Template for C

// Function to find majority element in the array
// a: input array
// size: size of input array
int majorityElement(int a[], int size)
{
        int count=0;
        int ele=-1;
        for(int i=0;i<size;i++)
        {
            if(count==0)
            {
                ele=a[i];
            }
            if(ele==a[i])
            count++;
            else
            count--;
        }
        int co=0;
        for(int i=0;i<size;i++)
        {
            if(a[i]==ele)
            co++;
        }
        if(co>(size/2))
        return ele;
        return -1;
    // your code here
        
}

// { Driver Code Starts.

int main(){

    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        
        for(int i = 0;i<n;i++){
            scanf("%d", &arr[i]);
        }
        printf("%d\n", majorityElement(arr, n));
    }

    return 0;
}
  // } Driver Code Ends