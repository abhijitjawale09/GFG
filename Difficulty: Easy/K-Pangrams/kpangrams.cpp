//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool kPangram(string str, int k) {
    int len = 0;
    unordered_map<char, int> mp;

    // Count frequency of each character and total alphabetic characters
    for (auto c : str) {
        if (c != ' ') {
            mp[c]++;
            len++;
        }
    }

    // If less than 26 alphabetic characters, can't form a pangram
    if (len < 26) return false;

    // If all 26 characters are already present, it's a pangram
    if (mp.size() == 26) return true;

    // Calculate required characters to form a pangram
    int req = 26 - mp.size();

    // Check if we can make the string a pangram with at most k swaps
    if ((len - mp.size() >= req) && (req <= k)) return true;

    return false;
}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin.ignore();
        string str;
        getline(cin, str);

        int k;
        cin >> k;

        Solution ob;
        bool a = ob.kPangram(str, k);
        if (a)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
// } Driver Code Ends