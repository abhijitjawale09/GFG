//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int minRemoval(vector<vector<int>> &intervals) {
        // code here
        int n = intervals.size();
        int count = 0;
        sort(intervals.begin() , intervals.end());
        
        int end = intervals[0][1];
         
         
        for(int i=1; i<n; i++) {
            int start = intervals[i][0];
            
            
            if(start < end) {
                end = min(end , intervals[i][1]);
                count++;
            }else {
                end = intervals[i][1];
            }
            
        }
        
        return count;
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<vector<int>> intervals(N, vector<int>(2));
        for (int i = 0; i < N; i++) {
            cin >> intervals[i][0] >> intervals[i][1];
        }
        Solution obj;
        cout << obj.minRemoval(intervals) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends