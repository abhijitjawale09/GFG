//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    long long getCount(int n) {
        // Your code goes here
         if (n == 0) return 0;
    
    // Keypad layout
    int keypad[4][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {-1, 0, -1}  // -1 indicates * and #
    };

    // Possible moves from each key
    vector<vector<int>> moves = {
        {0, 8}, // from 0 you can go to 0, 8
        {1, 2, 4}, // from 1 you can go to 1, 2, 4
        {2, 1, 3, 5}, // from 2 you can go to 2, 1, 3, 5
        {3, 2, 6}, // from 3 you can go to 3, 2, 6
        {4, 1, 5, 7}, // from 4 you can go to 4, 1, 5, 7
        {5, 2, 4, 6, 8}, // from 5 you can go to 5, 2, 4, 6, 8
        {6, 3, 5, 9}, // from 6 you can go to 6, 3, 5, 9
        {7, 4, 8}, // from 7 you can go to 7, 4, 8
        {8, 0, 5, 7, 9}, // from 8 you can go to 8, 0, 5, 7, 9
        {9, 6, 8}  // from 9 you can go to 9, 6, 8
    };

    // Initialize dp array
    vector<vector<long long>> dp(n + 1, vector<long long>(10, 0));

    // Base case: length 1
    for (int i = 0; i <= 9; ++i) {
        dp[1][i] = 1;
    }

    // Fill dp array for lengths 2 to n
    for (int length = 2; length <= n; ++length) {
        for (int i = 0; i <= 9; ++i) {
            dp[length][i] = 0;
            for (int move : moves[i]) {
                dp[length][i] += dp[length - 1][move];
            }
        }
    }

    // Calculate total count of sequences of length n
    long long total_sequences = 0;
    for (int i = 0; i <= 9; ++i) {
        total_sequences += dp[n][i];
    }

    return total_sequences;
}
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        cout << ob.getCount(n) << "\n";
    }
    return 0;
}

// } Driver Code Ends