// { Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    //  Function to find the gray code of given number n
    int greyConverter(int n)
    {
        int temp=n;
        n=n<<1;
        n=n^temp;
        n=n>>1;
        return n;
        // Your code here
        
    }
};

// { Driver Code Starts.

int main()
{
    int t,n;
    cin>>t;//testcases
    while(t--)
    {
        cin >> n;//input n
        Solution ob;
        //calling greyConverter() function
        cout << ob.greyConverter(n) << endl;
    }
}
  // } Driver Code Ends