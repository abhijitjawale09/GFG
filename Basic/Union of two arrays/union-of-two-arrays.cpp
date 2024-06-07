//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template in C++

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
      
    unordered_set<int> unionSet;
    unordered_set<int> encountered;

    // Insert elements of array a into the set
    for (int i = 0; i < n; ++i) {
        if (encountered.find(a[i]) == encountered.end()) {
            unionSet.insert(a[i]);
            encountered.insert(a[i]);
        }
    }

    // Insert elements of array b into the set
    for (int i = 0; i < m; ++i) {
        if (encountered.find(b[i]) == encountered.end()) {
            unionSet.insert(b[i]);
            encountered.insert(b[i]);
        }
    }

    // The size of the set is the count of distinct elements in the union
    return unionSet.size();
}
    //   int size =n + m;
    //     int count= 0;
    //     for(int i = 0  ; i<n ;i++){
    //         for(int j = 0 ; j < m ;j++){
    //             if(a[i] == b[j]){
    //                 count++;
    //             }
    //         }
    //     }
    //     return size - count;
    // }
};

//{ Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends