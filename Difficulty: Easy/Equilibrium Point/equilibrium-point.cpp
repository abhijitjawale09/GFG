//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find equilibrium point in the array.
    // arr: input array
    int equilibriumPoint(vector<long long> &arr) {
        // Your code here
         int n = arr.size();
    
    if (n == 1) {
        return 1; // The only element is the equilibrium point.
    }

    // Initialize sums
    long long sum1 = 0;
    long long sum2 = 0;

    // Calculate the sum of the first half
    for (int i = 0; i < n; i++) {
        sum2 += arr[i];
    }

    // Iterate to find the equilibrium point
    for (int i = 0; i < n; ++i) {
        sum2 -= arr[i]; // Exclude the current element from the right sum

        if (sum1 == sum2) {
            return i + 1; // Return 1-based index
        }

        sum1 += arr[i]; // Include the current element in the left sum
    }

    return -1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To discard any leftover newline characters
    while (t--)   // while testcases exist
    {
        vector<long long> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.equilibriumPoint(arr) << endl;
    }
}
// } Driver Code Ends