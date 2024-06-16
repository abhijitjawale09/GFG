//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
    public:
    bool checkBinary (string s)
    {
        // Your Code Here   
        bool flag = false ;
        for(int i=0; i<s.size(); i++) {
            if(s[i] == '1'){
                if(flag){
                  if (i > 0 && s[i - 1] == '0') {
                    return false;
                }  
            }   
            flag = true;
            }
        }
        return true;
    }
};

//{ Driver Code Starts.

int32_t main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		Solution ob;
		if (ob.checkBinary (s))
			cout << "VALID\n";
		else
			cout << "INVALID\n";
	}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends