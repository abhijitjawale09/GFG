//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
	public:
		int count_divisors(int n)
		{
		vector<int> divisors;
        for(int i = 1; i <= sqrt(n); i++) {
            if(n % i == 0) {
                divisors.push_back(i);
                if(i != n / i) { 
                    divisors.push_back(n / i);
                }
            }
        }
        int count = 0;
        for(int i = 0; i < divisors.size(); i++) {
            if(divisors[i] % 3 == 0) {
                count++;
            }
        }
            
        return count;
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
    	int ans = ob.count_divisors(n);
    	cout << ans << "\n";
    }
	return 0;
}
// } Driver Code Ends