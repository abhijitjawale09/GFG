//{ Driver Code Starts
//Initial Template for C++



#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++


class Solution{
    public:
    int findDuplicate(int arr[], int N, int K) 
    { 
const int MAX = 100000;
    std::vector<int> count(MAX + 1, 0);
    
    // Count occurrences of each element
    for (int i = 0; i < N; ++i) {
        count[arr[i]]++;
    }
    
    int minElement = INT_MAX;
    bool found = false;
    for (int i = 1; i <= MAX; ++i) {
        if (count[i] == K) {
            found = true;
            if (i < minElement) {
                minElement = i;
            }
        }
    }
    
    // If no element is repeated exactly K times, return -1
    return found ? minElement : -1;
    }
};

//{ Driver Code Starts.

int main() {
	int t;
	
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    int k;
	    cin >> k;
	    int a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    Solution ob;
	    cout << ob.findDuplicate(a,n,k) << endl;
	    }
	return 0;
}

// } Driver Code Ends