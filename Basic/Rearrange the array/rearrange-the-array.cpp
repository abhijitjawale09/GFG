//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;



// } Driver Code Ends

class Solution{
  public:
    void rearrangeArray(int arr[], int n) {
        // code here
        vector<int> a(arr, arr + n);

        sort(a.begin(), a.end());

        int smallIndex = 0;
        int largeIndex = n - 1;

        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                arr[i] = a[smallIndex++];
            } else {
                arr[i] = a[largeIndex--];
            }
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
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution obj;
        obj.rearrangeArray(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends