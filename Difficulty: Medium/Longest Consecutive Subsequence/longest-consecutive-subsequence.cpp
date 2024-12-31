//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:

    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        // Your code here
        int n = arr.size();
        
        unordered_set<int> st;
        int maxlength = 0;
        int len = 0;
        
        for(int i = 0; i < n; i ++) {
            st.insert(arr[i]);
        }
        
        for(int i = 0; i < n; i++) {
            int num = arr[i];
            len = 1;
            while(st.find(num - 1) != st.end()) {
                len++;
                num = num - 1;
            }
            maxlength = max(maxlength ,len);
        }
        return maxlength;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.longestConsecutive(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends