//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int primeSum(int N){
        // code here
        int sum = 0 ;
        map<int, int> mp;
        mp[2] = 1;
        mp[3] = 1;
        mp[5] = 1;
        mp[7] = 1;
        while (N > 0) {
            int temp = N % 10;
            N /= 10;
            if(mp[temp] == 1){
                sum += temp;
            } 
        }
        return sum ;  
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.primeSum(N)<<"\n";
    }
    return 0;
}
// } Driver Code Ends