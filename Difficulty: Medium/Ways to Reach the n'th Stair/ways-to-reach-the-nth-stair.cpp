//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
   int t[46];
    int solve(int n) {
        if(n == 0) {
            return 0;
        }
        if(n == 1 || n == 2) {
            return n;
        }
        
        if(t[n] != -1 ) {
            return t[n];
        }
        return t[n] = solve(n-1)+ solve(n-2);

    
    }
    int countWays(int n) {
        // your code here
        memset(t , -1 , sizeof(t));
        return solve(n);
    }
};



//{ Driver Code Starts.
int main() {
    // taking total testcases
    int t;
    cin >> t;
    while (t--) {
        // taking stair count
        int m;
        cin >> m;
        Solution ob;
        cout << ob.countWays(m) << endl; // Print the output from our pre computed array

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends