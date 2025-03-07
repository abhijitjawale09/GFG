//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    int t[1001][1001];
    int solve(string &s , int i , int j){
        if(i > j) {
            return 0;
        }
        if(i==j) return 1;
         
        if(t[i][j] != -1) {
            return t[i][j];
        }
        
       if(s[i] == s[j]) {
           return t[i][j] = 2 + solve(s , i + 1 , j - 1);
           
       }else{
           return t[i][j] = max(solve(s , i + 1 , j) , solve(s , i , j -1));
       }
       
    }
    int longestPalinSubseq(string &s) {
        // code here
        int n = s.size();
        int len = 0;
        memset(t , -1 , sizeof(t));
        return solve(s ,0 , n -1);
    }
};


//{ Driver Code Starts.

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.longestPalinSubseq(s) << endl;

        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends