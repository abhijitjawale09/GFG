//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	string removeDuplicates(string str) {
	    // code here
	    std::string ans = "";
        std::unordered_set<char> seen;
        
        for (char ch : str) {
            if (('a' <= ch && ch <= 'z') || ('A' <= ch && ch <= 'Z')) {
                if (seen.find(ch) == seen.end()) {
                    ans += ch;
                    seen.insert(ch);
                }
            }
        }
    
        return ans;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        auto ans = ob.removeDuplicates(str);

        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends