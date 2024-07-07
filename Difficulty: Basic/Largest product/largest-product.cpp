//{ Driver Code Starts
#include <iostream>
using namespace std;
#define ll long long

ll findMaxProduct(int A[], int n, int k);

int main() {
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int k;
		cin>>k;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
	
		cout<<findMaxProduct(a,n,k)<<endl;
	}
	// your code goes here
	return 0;
}
// } Driver Code Ends


/*You are required to complete the function*/

long long findMaxProduct(int A[], int n, int k)
{
//Your code here
    long long maxprod = 1;
    long long currprod = 1;
    for(int i = 0; i < k; i++) {
        currprod *= A[i];
    }
    maxprod = currprod;
    for(int i = k ; i < n; i++) {
        currprod = currprod / A[i - k] * A[i];
        if(currprod > maxprod) {
            maxprod = currprod;
        }
    }
    return maxprod;
}

