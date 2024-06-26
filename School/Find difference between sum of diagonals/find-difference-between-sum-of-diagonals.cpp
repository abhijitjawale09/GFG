//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int diagonalSumDifference(int N, vector<vector<int>> Grid) {
        // code here
        int  sumdia1 = 0;
        int  sumdia2 = 0;
        
        for(int i =0 ; i < N ; i++){
            sumdia1 += Grid[i][i]; 
        }
        for(int j =0 ; j < N ;j++){
            sumdia2 += Grid[j][N-j-1];
        }
        int diff = abs(sumdia1 - sumdia2);
        return diff;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<vector<int>> Grid1(N, vector<int>(N));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++) cin >> Grid1[i][j];
        Solution ob;
        cout << ob.diagonalSumDifference(N, Grid1) << "\n";
    }
}
// } Driver Code Ends