// { Driver Code Starts
#include<bits/stdc++.h>
#define br char xx; cin>>xx; cout<<xx<<endl;
#define lli long long int
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to find minimum number of characters which Ishaan must insert  
    //such that string doesn't have three consecutive same characters.
    int modified (string s)
    {
        // Your code here
        double count=1;
        int ans=0;
        for(int i=1;i<s.length();i++)
        {
            if(s[i]==s[i-1])
            {
                count++;
            }
            else
            {
                int partition=ceil((double)(count/(double)2));
                partition--;
                ans+=partition;
                count=1;
            }
        }
        
                int partition=ceil((double)(count/(double)2));
                partition--;
                ans+=partition;
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    string a;
    while(t--){
        cin>>a;
        Solution obj;
        cout<<obj.modified(a)<<endl;
    }
    return 0;
}
  // } Driver Code Ends