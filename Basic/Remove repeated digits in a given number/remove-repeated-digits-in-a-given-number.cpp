//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

long long int modify (long long int n);
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n; cin >> n;
        cout << modify (n) << endl;
    }
    return 0;
}
// Contributed By: Pranay Bansal

// } Driver Code Ends



long long int modify (long long int N)
{
    // your code here
    string str = to_string(N);
    string result = "";
    for(long long int i = 0 ; i < str.size() - 1; i++) {
        if(str[i] != str[i+1]){
            result.push_back(str[i]);
        }
    }
     result.push_back(str.back());
    return stoll(result);
}