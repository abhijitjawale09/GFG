//{ Driver Code Starts
// C++ program to check if two strings are isomorphic


#include<bits/stdc++.h>


using namespace std;
#define MAX_CHARS 256

// } Driver Code Ends
class Solution
{
    public:
    bool areIsomorphic(string str1, string str2) {
    if (str1.length() != str2.length()) {
        return false;
    }
    
    unordered_map<char, char> map1; 
    unordered_map<char, char> map2; 
    
    for (int i = 0; i < str1.length(); i++) {
        char c1 = str1[i];
        char c2 = str2[i];
        
        if (map1.count(c1)) {
            if (map1[c1] != c2) {
                return false; 
            }
        } else {
            map1[c1] = c2;
        }
        
        if (map2.count(c2)) {
            if (map2[c2] != c1) {
                return false; 
            }
        } else {
            map2[c2] = c1;
        }
    }
    
    return true;
}
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    
cout << "~" << "\n";
}
    
    return 0;
}
// } Driver Code Ends