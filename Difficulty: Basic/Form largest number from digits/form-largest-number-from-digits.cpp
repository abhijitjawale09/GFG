//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        string MaxNumber(int a[], int n)
        {
           //code here.
          string s = "";
          sort(a, a+n);
          for(int i = n -1  ; i >= 0; i--)
          {
              s += a[i] + '0';
          }
          return s;
            
        }  
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        
        Solution ob;
        cout << ob.MaxNumber(a, n) << endl;
    }
}

// } Driver Code Ends