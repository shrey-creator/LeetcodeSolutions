// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
   int intersection(int a[],int b[],int n,int m)
{
    int count=0;
    map<int,int> ma;
        for(int i=0;i<m;i++)
        {
            ma[b[i]]=1;
        }
        for(int i=0;i<n;i++)
        {
            if(ma[a[i]]==1)
            {
                count++;
                ma[a[i]]=0;
            }
        }
        return count;
}
int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
    int count=0;
    if(m<n)
    {
        count=intersection(a,b,n,m);
    }
    else
    {
        count=intersection(b,a,m,n);
    }
    return count;
    // code here
}
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for (int i = 0; i < n; i++) cin >> a[i];

        for (int i = 0; i < m; i++) cin >> b[i];
        Solution ob;
        cout << ob.NumberofElementsInIntersection(a, b, n, m) << endl;
    }
    return 0;
}  // } Driver Code Ends