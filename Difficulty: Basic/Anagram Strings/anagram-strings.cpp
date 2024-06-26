//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int areAnagram(string S1, string S2) {
        // code here
        int n1 = S1.size();
        int n2 = S2.size();
        if(n1 != n2){
            return 0;
        }
        vector<int> v(26, 0);
        for(char c : S1){
            v[c - 'a']++;
        }
        for(char c : S2){
            v[c - 'a']++;
        }
        for(int freq : v){
            if(freq %2  != 0){
                return 0;
            }
        }
        return 1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S1, S2;
        cin >> S1;
        cin >> S2;
        Solution ob;
        cout << ob.areAnagram(S1, S2) << endl;
    }
    return 0;
}

// } Driver Code Ends