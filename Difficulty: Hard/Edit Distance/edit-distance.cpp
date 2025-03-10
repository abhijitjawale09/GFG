//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
 
    int t[1001][1001]; 

    int solve(string& s1, string& s2, int i, int j) {
        int n = s1.size(), m = s2.size();  
    
        if (i >= n) return m - j; 
        if (j >= m) return n - i; 
    
        if (t[i][j] != -1) return t[i][j];
    
        if (s1[i] == s2[j]) { 
            return t[i][j] = solve(s1, s2, i + 1, j + 1); // If characters match, move ahead
        } else {
            int insertOp   = 1 + solve(s1, s2, i, j + 1);   // Insert s2[j] into s1
            int removeOp   = 1 + solve(s1, s2, i + 1, j);   // Remove s1[i]
            int replaceOp  = 1 + solve(s1, s2, i + 1, j + 1); // Replace s1[i] with s2[j]
    
            return t[i][j] = min({insertOp, removeOp, replaceOp});
        }
    }
    
    int editDistance(string& s1, string& s2) {
        // code here
        memset(t , -1 , sizeof(t));
        
        return  solve(s1 , s2 , 0 , 0);
    }
};


//{ Driver Code Starts.

int main() {

    int T;
    cin >> T;
    cin.ignore();
    while (T--) {
        string s1;
        getline(cin, s1);
        string s2;
        getline(cin, s2);
        Solution ob;
        int ans = ob.editDistance(s1, s2);
        cout << ans << "\n";
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends