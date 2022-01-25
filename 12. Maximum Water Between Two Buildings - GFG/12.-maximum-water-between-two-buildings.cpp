// { Driver Code Starts
//Initial Template for C++


// C++ implementation of the approach 
#include<bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to return the maximum water that can be stored.
    int maxWater(int height[], int n) 
    { 
        //Your code here
        int ans=0;
        int prev_max=0;
        int l=0;
        int r=n-1;
      while(l<r)
      {
          ans=min(height[l],height[r])*(r-l-1);
          if(ans>prev_max)
          {
              prev_max=ans;
          }
          if(height[l]<height[r])
          l++;
          else if(height[r]<=height[l])
          r--;
         
      }
      return prev_max;
    } 
};



// { Driver Code Starts.

// Driver code 
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int height[n];
        
        for(int i=0;i<n;i++)
        {
            cin>>height[i];
        }
        Solution ob;
        cout<<(ob.maxWater(height, n))<<endl;
    }

	 
} 

  // } Driver Code Ends