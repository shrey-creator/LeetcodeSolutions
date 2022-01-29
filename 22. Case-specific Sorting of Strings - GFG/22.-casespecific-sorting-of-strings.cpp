// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        // your code here
        int upper[26]={0};
        int lower[26]={0};
        for(int i=0;i<str.length();i++)
        {
            if(str[i]>=65 && str[i]<=90)
            {
                int pos=str[i]-65;
                upper[pos]++;
            }
            else
            {
                int pos=str[i]-97;
                lower[pos]++;
            }
        }
        string uppercase;
        string lowercase;
        for(int i=0;i<26;i++)
        {
            while(upper[i]!=0)
            {
                char c=i+65;
                uppercase+=c;
                upper[i]--;
            }
            while(lower[i]!=0)
            {
                char c=i+97;
                lowercase+=c;
                lower[i]--;
            }
        }
        int l=0;
        int u=0;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]>=65 && str[i]<=90)
            {
                str[i]=uppercase[u++];
            }
            else
            {
                str[i]=lowercase[l++];
            }
        }
        return str;
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
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}  // } Driver Code Ends