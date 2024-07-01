//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int divisibleBy11 (string S)
	{
	    // Your Code Here
 int sumodd=0;
        for(int i=0; i<S.size(); i+=2){
            sumodd+=(S[i]-'0');
        }
        int sumeven=0;
        for(int i=1; i<S.size(); i+=2){
            sumeven+=(S[i]-'0');
        }
        int sum=(sumodd-sumeven);
        if(sum%11==0){
            return 1;
        }
        else{
        return 0;
}	}
};

//{ Driver Code Starts.

int main()
{
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		Solution ob;
		cout << ob.divisibleBy11 (s) << endl;
	}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends