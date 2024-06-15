//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Returns maximum repeating element in arr[0..n-1].
	// The array elements are in range from 0 to k-1
	int maxRepeating(int *arr, int n, int k) {
	vector<int> v(k, 0);
    
    for (int i = 0; i < n; i++) {
        v[arr[i]]++;
    }

    int maxcount = 0; 
    int result = -1;
    
    for (int i = 0; i < k; i++) {
        if (v[i] > maxcount) {
            maxcount = v[i];
            result = i;
        } else if (v[i] == maxcount && result > i) {
            result = i;
        }
    }
    
    return result;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxRepeating(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends