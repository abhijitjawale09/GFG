//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string solve(string a);

int main() {
    int t;
    cin >> t;
    while (t--) {
        string a;
        cin >> a;
        cout << solve(a) << endl;
    }
}

// } Driver Code Ends


string solve(string a) {
    // code here
    unordered_set<char> ans;
    string q = "aeiou";
    for(char c : a) {
        if(q.find(c) == string::npos){
            ans.insert(c);
        }
    }
    return ans.size() % 2 ? "HE!" : "SHE!";
}