//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
	public:
	int fact(int a) {
	  	    if(a == 0 || a == 1) {
	        return a;
	    }
	    return a*fact(a - 1);
	}
		int is_StrongNumber(int n)
		{
		    // Code here.
		    int a = n, sum = 0;
		    while( n > 0) {
		        sum += fact(n % 10);
		        n = n / 10;
		   }
		   if(a == sum ){
		       return 1;
		   }
		   return 0;
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
    	int ans = ob.is_StrongNumber(n);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends