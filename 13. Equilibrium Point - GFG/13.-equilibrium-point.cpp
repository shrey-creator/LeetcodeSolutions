// { Driver Code Starts
#include <iostream>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
        if(n==1)
        return 1;
        int l=0;
        int r=n-1;
        int lSum=a[0];
        int rSum=a[r];
        while(l<r)
        {
            if(lSum>rSum)
            {
                rSum=rSum+a[--r];
            }
            else if(rSum>lSum)
            {
                lSum=lSum+a[++l];
            }
            else
            {
                if(r-l==2)
                return r;
                rSum=rSum+a[--r];
                lSum=lSum+a[++l];
            }
        }
        return -1;
    
        // Your code here
    }

};

// { Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends