//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	

	void segregateEvenOdd(int arr[], int n) {
	    // code here
	vector<int> e;
	vector<int> o;
	string result = "";
	for(int i = 0; i < n; i++) {
	    if(arr[i] % 2 == 0){
	        e.push_back(arr[i]);
	    } else{
	        o.push_back(arr[i]);
	    } 
	}
	sort(e.begin() , e.end());
	sort(o.begin() , o.end());
	 int eIndex = 0, oIndex = 0;
    for (int i = 0; i < n; i++) {
        if (eIndex < e.size()) {
            arr[i] = e[eIndex++];
        } else {
            arr[i] = o[oIndex++];
        }
    }
}
	
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.segregateEvenOdd(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends