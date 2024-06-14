//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<int> minAnd2ndMin(int a[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++) 
            cin >> a[i];

        vector<int> ans = minAnd2ndMin(a, n);
        if (ans[0] == -1)
            cout << -1 << endl;
        else 
            cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}
// } Driver Code Ends


vector<int> minAnd2ndMin(int a[], int n) {
    if (n < 2) return {-1, -1};
    int first = INT_MAX, second = INT_MAX;
    
    for (int i = 0; i < n; ++i) {
        if (a[i] < first) {
            second = first;
            first = a[i];
        } else if (a[i] < second && a[i] != first) {
            second = a[i];
        }
    }
     if (second == INT_MAX) {
        return {-1, -1};
    } else {
        return {first, second};
    }
  
    // int min = a[0];
    // int min2 = min;
    // for(int i = 0 ; i < n ; i++){
    //     if(a[i] < min){
    //         min = a[i];
    //     }else if(a[i] != min && min2<a[i]){
    //         min2 = a[i];
    // }
    // }
    // return {min , min2};
    
}