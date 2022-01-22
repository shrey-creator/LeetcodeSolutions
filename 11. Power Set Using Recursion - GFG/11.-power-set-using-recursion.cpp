// { Driver Code Starts
//Initial Template for C++


// CPP program to generate power set
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++


//Function to return the lexicographically sorted power-set of the string.
void helper(string s,int i,string final,vector<string> &ans)
{
    if(i==s.length())
    {
        ans.push_back(final);
        return;
    }
    final.push_back(s[i]);
    helper(s,i+1,final,ans);
    final.pop_back();
    helper(s,i+1,final,ans);
}
vector <string> powerSet(string s)
{
    vector<string> ans;
    helper(s,0,"",ans);
    sort(ans.begin(),ans.end());
    return ans;
   //Your code here
}


// { Driver Code Starts.


// Driver code
int main()
{
    int T;
    cin>>T;//testcases
    while(T--)
    {
        string s;
        cin>>s;//input string
        
        //calling powerSet() function
        vector<string> ans = powerSet(s);
        
        //sorting the result of the powerSet() function
        sort(ans.begin(),ans.end());
        
        //printing the result
        for(auto x:ans)
        cout<<x<<" ";
        cout<<endl;
        
        
    }

return 0;
}   // } Driver Code Ends