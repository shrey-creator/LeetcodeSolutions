// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        int leftM[n]={0};
        int rightM[n]={0};
        int leftMax=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>leftMax)
            {
                leftMax=arr[i];
            }
              leftM[i]=leftMax;
        }
        // for(int i=0;i<n;i++)
        // cout<<leftM[i]<<" ";
        int rightMax=INT_MIN;
        for(int i=n-1;i>=0;i--)
        {
            if(arr[i]>rightMax)
            {
                rightMax=arr[i];
            }
             rightM[i]=rightMax;
        }
        long long ans=0;
        for(int i=0;i<n;i++)
        {
            long long water=(min(rightM[i],leftM[i])-arr[i]);
            // cout<<water<<endl;
            ans=ans+water;
        }
        return ans;
        // code here
    }
};

// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends