// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
#define RANGE 255


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    //Function to arrange all letters of a string in lexicographical 
    //order using Counting Sort.
    string countSort(string arr){
        int count[26]={0};
        for(int i=0;i<arr.length();i++)
        {
            int index=arr[i]-97;
            count[index]++;
        }
        string ans;
        for(int i=0;i<26;i++)
        {
            while(count[i]!=0)
            {
                char c=i+97;
                ans+=c;
                count[i]--;
            }
        }
        return ans;
        // code here
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
        string arr;
        cin>>arr;
        Solution obj;
        cout<<obj.countSort(arr)<<endl;
    }
    return 0;
}
  // } Driver Code Ends