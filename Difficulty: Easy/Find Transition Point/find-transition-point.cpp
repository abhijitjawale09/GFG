//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:    
    
    int transitionPoint(int arr[], int n) {
        // code here
      if (arr[0] == 1) return 0;
        if (arr[n-1] == 0) return -1;
        
        int start = 0;
        int end = n - 1;
        
        while (start < end) {
            int mid = start + (end - start) / 2;
            if (arr[mid] == 0) {
                if (arr[mid+1] == 1) {
                    return mid + 1;
                }
                start = mid + 1;
            } else {
                if (arr[mid-1] == 0) {
                    return mid;
                }
                end = mid;
            }
        }
    }

};

//{ Driver Code Starts.
int transitionPoint(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.transitionPoint(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends