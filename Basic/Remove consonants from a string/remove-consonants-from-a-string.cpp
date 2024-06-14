//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    string removeConsonants(string s){
    //complete the function heredef removeConsonants(s):
    unordered_set<char> ss = {'a','e','i','o','u','A','E','I','O','U'};
    string result = "";
    for(char c : s){
        if (ss.count(c) > 0) {
            result += c;
        }
    }
    
    if(result.empty()){
        return "No Vowel";
    }
    return result;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout << ob.removeConsonants(s) << "\n";
    }
return 0;
}
// } Driver Code Ends