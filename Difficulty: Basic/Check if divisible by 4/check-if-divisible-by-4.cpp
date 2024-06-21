//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int divisibleBy4 (string N)
	{
	    // Your Code 
	        int length = N.length();
    
    if (length == 1) {
        int num = N[0] - '0'; // Convert char to integer
        return (num % 4 == 0) ? 1 : 0;
    }
    
    // Extract the last two digits and form the number
    int lastTwoDigits = (N[length - 2] - '0') * 10 + (N[length - 1] - '0');
    
    // Check if the number formed by the last two digits is divisible by 4
    return (lastTwoDigits % 4 == 0) ? 1 : 0;
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
		cout << ob.divisibleBy4 (s) << endl;
	}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends