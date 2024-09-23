//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here4
       int n = arr.size();
                int xr = 0;
                for (int i = 0; i < n; i++) {
                    xr ^= arr[i];
                    xr ^= (i + 1);
                }
                int setBit = xr & -xr;
            
                int x = 0, y = 0; 
                for (int i = 0; i < n; i++) {
                    if (arr[i] & setBit) {
                        x ^= arr[i]; 
                    } else {
                        y ^= arr[i]; 
                    }
                }
            
                for (int i = 1; i <= n; i++) {
                    if (i & setBit) {
                        x ^= i; 
                    } else {
                        y ^= i;
                    }
                }
            
                int countX = 0;
                for (int num : arr) {
                    if (num == x) countX++;
                }
            
                if (countX == 2) {
                    return {x, y}; 
                } else {
                    return {y, x}; 
                
                }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends