//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
string reverseString(string s);
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	    {
	        string s;
	        getline(cin,s);
	        cout<<reverseString(s)<<endl;
	    }
}

// } Driver Code Ends


string reverseString(string s)
{
    //code here.
    vector<bool> seen(128, false); // ASCII character set
    string result;

    // Traverse the string from the end to the beginning
    for (int i = s.length() - 1; i >= 0; --i) {
        char c = s[i];
        // Check if the character is not a space and not already seen
        if (c != ' ' && !seen[c]) {
            result += c;      // Append to the result
            seen[c] = true;   // Mark this character as seen
        }
    }
    
    return result;

}
