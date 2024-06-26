//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    string encodeTheName(string S) {
        // code here
        string ans = "";
        for(int i = 0; i <S.size() ; i++) {
            ans +=  to_string(S[i] - 10 + i);
            
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        
        cin>>S;

        Solution ob;
        cout << ob.encodeTheName(S) << endl;
    }
    return 0;
}
// } Driver Code Ends