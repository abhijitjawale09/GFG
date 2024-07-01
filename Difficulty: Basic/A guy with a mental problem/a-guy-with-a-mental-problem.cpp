//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    long long minTime(long long a[], long long b[], long long n)
    {
        // Your code goes here  
        long long z = 0;
        long long x = 0;
        for(int i = 0; i < n; i++) {
            if(i%2 == 0){
                z+= a[i];
                x += b[i];
            }else if(i % 2 != 0){
                z += b[i];
                x += a[i];
            } 
            
        }
        return min(z,x);
    }
};

//{ Driver Code Starts.
int main() {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin >> n;
        long long a[n], b[n];
        for(long long i=0;i<n;i++)
            cin >> a[i];
        for(long long i=0;i<n;i++)
            cin >> b[i];
        Solution ob;
        cout << ob.minTime(a, b, n) << endl;
    }
    return 0;
}

// } Driver Code Ends