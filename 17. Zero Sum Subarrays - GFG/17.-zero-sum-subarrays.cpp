// { Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;
#define ll long long

 // } Driver Code Ends
//User function template for C++

class Solution{
    public:
    //Function to count subarrays with sum equal to 0.
    ll findSubarray(vector<ll> arr, int n ) {
        map<ll,ll> m;
        int presum=0;
        int count=0;
        for(int i=0;i<n;i++)
        {
            presum+=arr[i];
            if(m.find(presum)!=m.end())
            {
                count+=m[presum];
            }
            if(presum==0)
            {
                count++;
            }
            m[presum]++;
        }
        return count;
        //code here
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
        cin>>n; //input size of array
       
        vector<ll> arr(n,0);
        
        for(int i=0;i<n;i++)
            cin>>arr[i]; //input array elements
        Solution ob;
        cout << ob.findSubarray(arr,n) << "\n";
    }
	return 0;
}  // } Driver Code Ends