// { Driver Code Starts
// C++ program to check if two strings are isomorphic
#include<iostream>
#include<string.h>

using namespace std;
#define MAX_CHARS 256

 // } Driver Code Ends
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        if(str1.length()!=str2.length())
        return false;
        int arr[26];
        bool check[26]={false};
        for(int i=0;i<26;i++)
        arr[i]=-1;
        for(int i=0;i<str1.length();i++)
        {
            int pos=str1[i]-97;
            int pos2=str2[i]-97;
           
            
            if(arr[pos]==-1)
            {
                if(check[pos2]==true)
                return false;
                arr[pos]=pos2;
            }
            else
            {
                 
                
                if(arr[pos]!=pos2)
                return false;
            }
            check[pos2]=true;
        }
        return true;
        // Your code here
        
    }
};

// { Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}  // } Driver Code Ends