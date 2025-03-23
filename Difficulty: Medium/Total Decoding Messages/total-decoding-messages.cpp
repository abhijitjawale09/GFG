//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
    public:
        unordered_map<int, int> memo; 
        
        int solve(string &digits, int i) {
            int n = digits.size();
            
            if (i == n) return 1;  // Reached the end, valid decoding found
            if (digits[i] == '0') return 0;  // Leading '0' is invalid
            
            if (memo.find(i) != memo.end()) return memo[i]; // Return if already computed
    
            int count = solve(digits, i + 1); // Take one digit
    
            if (i < n - 1) {
                int two = stoi(digits.substr(i, 2));
                if (two >= 10 && two <= 26) {
                    count += solve(digits, i + 2); // Take two digits
                }
            }
    
            return memo[i] = count; // Store result in memo
        }
    
        int countWays(string &digits) {
            if (digits.empty() || digits[0] == '0') return 0; // Edge case
            memo.clear(); // Clear memo before new call
            return solve(digits, 0);
        }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    cin.ignore();
    while (tc--) {
        string digits;
        getline(cin, digits);
        Solution obj;
        int ans = obj.countWays(digits);
        cout << ans << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends