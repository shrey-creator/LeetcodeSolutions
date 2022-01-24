// { Driver Code Starts
//Initial Template for C++
#include<iostream> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    //Complete this function
    //Function to find the length of longest subarray of even and odd numbers.
    bool check_alternate(int arr[],int i)
    {
        if((arr[i]%2==0 && arr[i-1]%2!=0) || (arr[i]%2!=0 && arr[i-1]%2==0))
        return true;
        return false;
    }
    int maxEvenOdd(int arr[], int n) 
    { 
        int ans=1;
        int prev_max=1;
        for(int i=1;i<n;i++)
        {
            if(check_alternate(arr,i))
            {
                ans++;
            }
            else
            {
                ans=1;
            }
            if(ans>prev_max)
            {
                prev_max=ans;
            }
        }
        return prev_max;
       //Your code here
    } 
};

// { Driver Code Starts.
int main() 
{ 
    int testcases;
    //testcases
    cin>>testcases;
    while(testcases--)
    {
        int sizeOfArray;
        //size of array
        cin>>sizeOfArray;
        int arr[sizeOfArray];
        
        //inserting elements in the array
        for(int i=0;i<sizeOfArray;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        //calling function
        cout  << ob.maxEvenOdd(arr, sizeOfArray)<<endl; 
    }
   return 0; 
} 
  // } Driver Code Ends