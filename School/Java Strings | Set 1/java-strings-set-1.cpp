//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string conRevstr(string S1, string S2) {
        // code here
        string s = S1 + S2;
        int n = s.size();
        for (int i = 0; i < n / 2; i++) {
            swap(s[i], s[n-i-1]);
        }
        return s;
    }
};


// class Solution {
//   public:
//     string conRevstr(string S1, string S2) {
//         // code here
//         string s = S1 + S2 ;
//         stack<char> st;
//         for (char c : s) {
//             st.push(c);
//         }
//         s = "";
//         while (!st.empty()) {
//             s.push_back(st.top());
//         }
//         return s;
//     }
// };

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S1, S2;
        cin >> S1;
        cin >> S2;
        Solution ob;
        cout << ob.conRevstr(S1, S2) << endl;
    }
    return 0;
}

// } Driver Code Ends