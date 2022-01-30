// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to remove pair of duplicates from given string using Stack.
    string removePair(string str)
    {
        // Your code here
        stack<char> s;
        for(int i=0;i<str.length();i++)
        {
            if(!s.empty())
            {
                if(s.top()==str[i])
                {
                    s.pop();
                }
                else
                {
                    s.push(str[i]);
                }
            }
            else
            s.push(str[i]);
        }
        string ans="";
        while(!s.empty())
        {
            ans=s.top()+ans;
            s.pop();
        }
        return ans;
    }
    
};

// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        string s;
        cin>>s;
        Solution obj;
        string ans = obj.removePair (s);
        if(ans=="")
            cout<<"Empty String"<<endl;
        else
            cout<<ans<<endl;
    }
    
	return 0;
}  // } Driver Code Ends