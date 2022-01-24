// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    // Function to count number of Ones
    // arr: input array 
    // N: size of input array
    int binarySearch(int arr[],int N)
    {
        int l=0;
        int r=N-1;
        int index=-1;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(arr[mid]==0)
            {
                r=mid-1;
            }
            else
            {
                index=mid;
                l=mid+1;
            }
        }
        return index;
    }
    int countOnes(int arr[], int N)
    {
        
        int index=binarySearch(arr,N);
        
        return (index+1);
        // Your code here
        
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        int *arr = new int[n]; 
        for(int i = 0; i < n; i++)
            cin>>arr[i];
            
        Solution ob;
        cout <<ob.countOnes(arr, n)<<endl;
    }
    return 0;
}  // } Driver Code Ends