// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        string ans="";
        string words="";
        for(int i=0;i<S.length();i++)
        {
            if(S[i]=='.')
            {
                ans='.'+words+ans;
                words="";
            }
            else
            words+=S[i];
        }
        
        ans=words+ans;
                
        return ans;
    } 
};

// { Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}  // } Driver Code Ends