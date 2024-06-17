//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends


class Solution{
  public:
    long int lenOfLongIncSubArr(long int arr[], long int n) {
if (n == 0) {
        return 0;
    }
    
    int max_length = 1;
    int current_length = 1;
    
    for (int i = 1; i < n; ++i) {
        if (arr[i] > arr[i-1]) {
            ++current_length;
        } else {
            if (current_length > max_length) {
                max_length = current_length;
            }
            current_length = 1;
        }
    }
    
    // Check the last subarray length
    if (current_length > max_length) {
        max_length = current_length;
    }
    
    return max_length;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long int n;
        cin >> n;
        long int arr[n], i;
        for (i = 0; i < n; i++) 
            cin >> arr[i];
        Solution obj;
        cout << obj.lenOfLongIncSubArr(arr, n) << endl;
    }
    return 0;
}
// } Driver Code Ends