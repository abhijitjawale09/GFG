//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
  int totalJumps(int X, int Y, int N, int arr[]) {
    int total_jumps = 0;

    for (int i = 0; i < N; ++i) {
        int height = arr[i];
        if (X >= height) {
            total_jumps += 1;
        } else {
            int effective_gain_per_jump = X - Y;
            int remaining_height = height - X;
            int full_jumps_needed = remaining_height / effective_gain_per_jump;
            total_jumps += full_jumps_needed + 1; // +1 for the initial jump
            if (remaining_height % effective_gain_per_jump != 0) {
                total_jumps += 1; // An extra jump for any remaining height
            }
        }
    }

    return total_jumps;
    }
};


// class Solution{
// public:
//     int totalJumps(int X, int Y, int N, int arr[]){
//         // code her
//         int count = 0;
//         int slip =0;
//         for(int i = 0; i< N; i++) {
//             if(arr[i] != X){
//                 count++;
//                 slip = X - Y;
//             }
            
//         }
//         return count;
//     }
// };

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int X, Y, N;
        cin>>X>>Y>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.totalJumps(X, Y, N, arr)<<"\n";
    }
    return 0;
}
// } Driver Code Ends