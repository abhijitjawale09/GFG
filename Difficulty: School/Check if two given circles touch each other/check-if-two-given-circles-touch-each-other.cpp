//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int circleTouch(int X1, int Y1, int R1, int X2, int Y2, int R2) {
        // code here
          int d = (Y2-Y1)*(Y2-Y1)+(X2-X1)*(X2-X1);
        int r = R1+R2;
        int j = sqrt(d);
        if(j<=r)
         return 1;
        else
         return 0;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int X1, Y1, R1, X2, Y2, R2;
        cin >> X1 >> Y1 >> R1 >> X2 >> Y2 >> R2;
        Solution ob;
        cout << ob.circleTouch(X1, Y1, R1, X2, Y2, R2) << "\n";
    }
}

// } Driver Code Ends