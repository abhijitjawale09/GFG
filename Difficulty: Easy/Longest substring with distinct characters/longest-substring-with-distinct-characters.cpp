//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
public:
    int longestUniqueSubstr(string &s) {
        int n = s.size();
        if (n == 0) return 0;

        int maxsub = 0; // To store the maximum length of unique substring
        unordered_set<char> st; // To store unique characters in the current window
        int start = 0; // Start of the sliding window

        for (int i = 0; i < n; i++) {
            // Remove characters from the set until the current character becomes unique
            while (st.find(s[i]) != st.end()) {
                st.erase(s[start]);
                start++;
            }

            // Add the current character to the set and calculate the window size
            st.insert(s[i]);
            maxsub = max(maxsub, i - start + 1);
        }

        return maxsub;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {

        Solution obj;
        string s;
        cin >> s;
        cout << obj.longestUniqueSubstr(s) << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends