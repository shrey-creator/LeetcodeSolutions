// { Driver Code Starts
// A C++ program to print elements with count more than n/k

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to find all elements in array that appear more than n/k times.
    int countOccurence(int arr[], int n, int k) {
        // int temp[n]={0};
         int occ=n/k;
        // for(int i=0;i<n;i++)
        // {
        //     temp[arr[i]]++;
        // }
        map<int,int> m;
        for(int i=0;i<n;i++)
        m[arr[i]]++;
        int count=0;
        for(auto it:m)
        {
            if(it.second>occ)
            count++;
        }
        return count;
        // Your code here
    }
};


// { Driver Code Starts.
int main() {
    int t, k;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;

        int arr[n];

        for (i = 0; i < n; i++) cin >> arr[i];
        cin >> k;
        Solution obj;
        cout << obj.countOccurence(arr, n, k) << endl;
    }
    return 0;
}
  // } Driver Code Ends