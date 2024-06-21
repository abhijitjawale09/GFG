//{ Driver Code Starts
// Initial temolate for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// user function temolate for C++

class Solution {
  public:
    long long int MaximumIntegerValue(string S) {
        // code here
        long long add = 0 ;
        long long mul = 0;
        long long ans = 0 ;
        for(int i = 0; i < S.size(); i++ ) {
            add = (S[i] - '0') + ans; ;
            mul = (S[i] - '0') * ans;
            ans = max(add , mul);
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
        cin >> S;
        Solution ob;
        cout << ob.MaximumIntegerValue(S) << endl;
    }
    return 0;
}
// } Driver Code Ends