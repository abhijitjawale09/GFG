//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
       stack<string> words;
    string word = "";
    
    // Traverse the string and push each word to the stack
    for (char ch : S) {
        if (ch == '.') {
            words.push(word);
            word = "";
        } else {
            word += ch;
        }
    }
    // Push the last word
    words.push(word);
    
    // Pop words from the stack and form the result
    string result = "";
    while (!words.empty()) {
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
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends