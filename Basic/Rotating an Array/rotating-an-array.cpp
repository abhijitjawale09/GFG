//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    
    void reverse(int arr[] , int start , int end){
        
        while(start < end){
            swap(arr[start] , arr[end]);
            start++;
            end--;
        }
    }
    void leftRotate(int arr[], int n, int d) {
        // code here
        int start = 0;
        int end = n - 1;
        if(d == 0 || d == n){
            return ;
        }
        
        d= d % n;
        
        reverse(arr, 0, d - 1);
        reverse(arr, d, n - 1);
        reverse(arr, 0, n-1);
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> d;
        Solution ob;
        ob.leftRotate(arr, n, d);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}



// } Driver Code Ends