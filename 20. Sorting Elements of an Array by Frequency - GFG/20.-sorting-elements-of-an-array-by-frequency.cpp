// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution{
    public:
    //Complete this function
    //Function to sort the array according to frequency of elements.
    static bool cmpa(pair<int,int> p1,pair<int,int> p2)
    {
        if(p1.second>p2.second)
        return true;
        if(p1.second==p2.second)
        {
            if(p1.first<=p2.first)
            return true;
        }
        return false;
    }
    vector<int> sortByFreq(int arr[],int n)
    {
        unordered_map<int,int> freq;
        
        for(int i=0;i<n;i++)
        freq[arr[i]]++;
        
        vector<pair<int,int>> v;
        
        for(auto it:freq)
        {
            v.push_back(make_pair(it.first,it.second));
        }
        sort(v.begin(),v.end(),cmpa);
        vector<int> ans;
        
        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<v[i].second;j++)
                ans.push_back(v[i].first);
        }
        
        return ans;
        //Your code here
    }
};

// { Driver Code Starts.

int main() {
	
	
	int t;
	cin >> t;
	
	
	while(t--){
	    
	    
	    int n;
	    cin >> n;
	    
	    int a[n+1];
	    
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    Solution obj;
	    vector<int> v;
	    v = obj.sortByFreq(a,n);
	    for(int i:v)
	        cout<<i<<" ";
	    cout << endl;
	}
	
	return 0;
}

  // } Driver Code Ends