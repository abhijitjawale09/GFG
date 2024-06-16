//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    vector<string> findThePattern(int N) {
        // code here
    vector<string> pattern;
    char current_char = 'A';
    
    for (int i = 0; i < N; ++i) {
        if (i == 0 || i == N-1) {
            // First or last row
            string row;
            for (int j = 0; j < N; ++j) {
                row += current_char + j;
            }
            current_char += N;
            pattern.push_back(row);
        } else {
            // Intermediate rows
            string row = "";
            row += current_char;
            for (int j = 0; j < N-2; ++j) {
                row += '$';
            }
            row += current_char + 1;
            current_char += 2;
            pattern.push_back(row);
        }
    }
    
    return pattern;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        vector<string> v = ob.findThePattern(N);
        
        for(int i=0; i<v.size(); i++)
            cout<<v[i]<<endl;
    }
    return 0;
}
// } Driver Code Ends