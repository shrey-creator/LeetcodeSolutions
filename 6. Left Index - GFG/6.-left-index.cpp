// { Driver Code Starts
#include <iostream>
using namespace std;


 // } Driver Code Ends
// Function to find element in sorted array

int leftIndex(int N, int arr[], int X){
    int l=0;
    int r=N-1;
    int ans=-1;
    while(l<=r)
    {
        int m=(l+r)/2;
        if(arr[m]<X)
        {
            l=m+1;
        }
        else if(arr[m]>X)
        {
            r=m-1;
        }
        else
        {
            ans=m;
            r=m-1;
        }
    }
    return ans;
    
    // Your code here
    
}




// { Driver Code Starts.

// Driver Code
int main() {
	
	// Testcase input
	int testcases;
	cin >> testcases;
    
    // Looping through all testcases
	while(testcases--){
	    int sizeOfArray;
	    cin >> sizeOfArray;
	    
	    int arr[sizeOfArray];
	    
	    // Array input
	    for(int index = 0; index < sizeOfArray; index++){
	        cin >> arr[index];
	    }
	    
	    int elemntToSearch;
	    cin >> elemntToSearch;
	    
	    cout << leftIndex(sizeOfArray, arr, elemntToSearch) << endl;
	}
	
	return 0;
}  // } Driver Code Ends