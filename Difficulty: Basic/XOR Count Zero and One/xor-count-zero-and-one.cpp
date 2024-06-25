//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
	int find_xor(int n)
	{
	    // Code here
	 int ones=0;
    int zeros=0;
    while(n>0)
    {
        if(n%2!=0)
        {
            ones++;
        }
        else if(n%2==0)
        {
            zeros++;
        }
        n=n/2;
    }
    
    return ones^zeros;
	}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	Solution ob;
    	int ans = ob.find_xor(n);
    	cout << ans << "\n";
    }
	return 0;
}

// } Driver Code Ends