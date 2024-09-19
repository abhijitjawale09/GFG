//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to reverse words in a given string.
    string reverseWords(string str) {
        // code here
        stack<string> words;
        string word = "";
        for (char ch : str) {
        if (ch == '.') {
            words.push(word);
            word = "";
        } else {
            word += ch;
        }
    }
    words.push(word);
    
    string result = "";
    while(!words.empty()) {
        result += words.top();
        words.pop();
         if (!words.empty()) {
            result += ".";
        }
    }
    return result;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.reverseWords(s) << endl;
    }
}
// } Driver Code Ends