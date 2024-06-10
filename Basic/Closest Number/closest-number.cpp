//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int closestNumber(int N , int M) {
        // code here
        int candidate1 = (N / M) * M;
    int candidate2 = (N * M > 0) ? (N / M + 1) * M : (N / M - 1) * M;
    
    // Calculate distances from N
    int distance1 = abs(N - candidate1);
    int distance2 = abs(N - candidate2);

    // Determine the closest candidate
    if (distance1 < distance2) {
        return candidate1;
    } else if (distance1 > distance2) {
        return candidate2;
    } else {
        // If distances are equal, return the one with the maximum absolute value
        return (abs(candidate1) > abs(candidate2)) ? candidate1 : candidate2;
    }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,M;
        
        cin>>N>>M;

        Solution ob;
        cout << ob.closestNumber(N,M) << endl;
    }
    return 0;
}
// } Driver Code Ends