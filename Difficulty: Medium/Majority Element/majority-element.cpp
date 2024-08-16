//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int arr[], int size) {

        // your code here
         std::unordered_map<int, int> freq_map;

        // Step 1: Count frequencies of each element
        for (int i = 0; i < size; i++) {
            freq_map[arr[i]]++;
        }

        // Step 2: Find the majority element
        for (const auto& pair : freq_map) {
            if (pair.second > size / 2) {
                return pair.first;
            }
        }

        // If no majority element exists
        return -1;
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
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}

// } Driver Code Ends