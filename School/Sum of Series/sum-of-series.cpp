//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
public:
    long long int seriesSum(int n) {
        // Calculate the sum of the first n natural numbers
        // Ensure that the calculation is done using long long int to avoid overflow
        long long int long_n = static_cast<long long int>(n);
        long long int sum = (long_n * (long_n + 1)) / 2;
        return sum;
    }
};




//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n;
        scanf("%d",&n);
        
        Solution obj;
        long long res = obj.seriesSum(n);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends