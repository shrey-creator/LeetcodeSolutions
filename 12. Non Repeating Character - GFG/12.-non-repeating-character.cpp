// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
       //Your code here
       int repeat[26];
       memset(repeat,-1,sizeof(repeat));
       for(int i=0;i<S.length();i++)
       {
           int pos=S[i]-97;
           if(repeat[pos]==-1)
           {
               repeat[pos]=i;
           }
           else 
           {
               repeat[pos]=-2;
           }
       }
       int index=INT_MAX;
       for(int i=0;i<26;i++)
       {
           if(repeat[i]>=0)
           {
               if(repeat[i]<index)
               index=repeat[i];
           }
       }
       if(index==INT_MAX)
       {
           return '$';
       }
       return S[index];
       
    }

};

// { Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--)
	{
	
	    string S;
	    cin >> S;
	    Solution obj;
        char ans = obj.nonrepeatingCharacter(S);
        
        if(ans != '$')
	    cout << ans;
        else cout << "-1";
            
        cout << endl;
	    
	}
	
	return 0;
}
  // } Driver Code Ends