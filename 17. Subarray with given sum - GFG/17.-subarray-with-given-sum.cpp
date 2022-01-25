// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        vector<int> sliding_window;
        int l=0;
        int r=0;
        int sum=0;
        int i=0;
        for(i=0;i<n;i++)
        {
            if(arr[i]+sum<s)
            {
                sum+=arr[i];
              
            }
            else if(arr[i]+sum>s)
            {
                sum-=arr[l];
                l++;
                if(sum==s)
                break;
                i--;
            }
            else
            {
                sum+=arr[i];
                break;
            }
        }
        if(sum==s)
        sliding_window={l+1,i+1};
        else
         sliding_window={-1};
        return sliding_window;
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
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends