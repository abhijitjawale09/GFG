//{ Driver Code Starts
// C++ program Find concatenated string with 
// uncommon characters of given strings 
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends


class Solution
{
    public:
    //Function to remove common characters and concatenate two strings.
    string concatenatedString(string s1, string s2) 
    { 
        // Your code here
        vector<int> count1(26, 0);
    vector<int> count2(26, 0);
    
    // Count occurrences of each character in s1
    for (char c : s1) {
        count1[c - 'a']++;
    }
    
    // Count occurrences of each character in s2
    for (char c : s2) {
        count2[c - 'a']++;
    }
    
    string ans = "";
    bool hasUncommonChar = false;
    
    // Add characters from s1 that are not in s2
    for (char c : s1) {
        if (count1[c - 'a'] > 0 && count2[c - 'a'] == 0) {
            ans.push_back(c);
            hasUncommonChar = true;
        }
    }
    
    // Add characters from s2 that are not in s1
    for (char c : s2) {
        if (count2[c - 'a'] > 0 && count1[c - 'a'] == 0) {
            ans.push_back(c);
            hasUncommonChar = true;
        }
    }
    
    // If ans is empty, return "-1"
    if (!hasUncommonChar) {
        return "-1";
    }
    
    return ans;
    }

};

//{ Driver Code Starts.

/* Driver program to test above function */
int main() 
{ 
	int t;
	cin >> t;
	
	while(t--){
    	string s1, s2;
    	cin >> s1 >> s2;
    	Solution obj;
    	string res = obj.concatenatedString(s1, s2);
    	cout<<res<<endl;
	}
	return 0; 
}

// } Driver Code Ends