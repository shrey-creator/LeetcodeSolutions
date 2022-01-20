// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> quadraticRoots(int a, int b, int c) {
        // x = (-b ± √ (b² - 4ac) )/2a.
        double d=((b*b)-(4*a*c));
        if(d<0)
        return {-1};
        double sol1=(double)((-b + sqrt(d) )/(2*a));
        double sol2=(double)((-b - sqrt(d))/(2*a));
        
        return {floor(max(sol1,sol2)),floor(min(sol1,sol2))};
        // code here
    }
};

// { Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int a, b, c;
        cin >> a >> b >> c;
        Solution ob;
        vector<int> roots = ob.quadraticRoots(a, b, c);
        if (roots.size() == 1 && roots[0] == -1)
            cout << "Imaginary";
        else
            for (int i = 0; i < roots.size(); i++) cout << roots[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends