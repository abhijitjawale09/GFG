//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string delAlternate(string S) {
        // code here
        string a = "";
        int n =S.size();
        for(int i =0 ; i<n ; i++){
            if(i%2 == 0){
                a += S[i];
            }
            
        }
        return a;
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
        cout << ob.delAlternate(S) << endl;
    }
    return 0;
}

// } Driver Code Ends