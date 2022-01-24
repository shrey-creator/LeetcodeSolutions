// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        bool check[n+1]={0};
        for(int i=0;i<n;i++)
        {
            if(arr[i]>0 && arr[i]<=n)
            {
                check[arr[i]]=true;
            }
        }
        int ans=n+1;
        for(int i=1;i<=n;i++)
        {
            if(check[i]==false)
            {
            ans=i;
            break;
            }
        }
        
        return ans;
        // for(int i=0;i<n;i++)
        // {
        //     int pos=arr[i]%n;
        //     while(arr[i]>0 && arr[i]<n && arr[i]!=i)
        //     {
        //         swap(arr[i],arr[pos]);
        //         pos=arr[i]%n;
        //     }
        // }
        // int ans=0;
        // // for(int i=0;i<n;i++)
        // // cout<<arr[i]<<" ";
        // for(int i=1;i<n;i++)
        // {
        //     if(arr[i]!=i)
        //     {
        //         ans=i;
        //         break;
        //     }
        // }
        // if(ans==0)
        // {
        //     ans=n;
        //     if(arr[0]==n)
        //     ans++;
        // }
        
        // return ans;
        // Your code here
    } 
};

// { Driver Code Starts.

int missingNumber(int arr[], int n);

int main() { 
    
    //taking testcases
    int t;
    cin>>t;
    while(t--){
        
        //input number n
        int n;
        cin>>n;
        int arr[n];
        
        //adding elements to the array
        for(int i=0; i<n; i++)cin>>arr[i];
        
        Solution ob;
        //calling missingNumber()
        cout<<ob.missingNumber(arr, n)<<endl;
    }
    return 0; 
}   // } Driver Code Ends