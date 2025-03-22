//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> dp;
    int solve(vector<int>& arr, int i ,int n){
        if(n <= i){
            return 0;
        }
        if(dp[i] != -1) {
            return dp[i];
        }
        int take = solve(arr , (i + 2)  , n)+ arr[i];
        int not_take = solve(arr , i + 1 , n);
        
        
        return dp[i] = max(take , not_take);
    }
    int maxValue(vector<int>& arr) {
        // your code here
        int n = arr.size();
        
        dp.assign(n , -1);
        int max1 =  solve(arr , 0, n-1);
        dp.assign(n , -1);
        int max2 =  solve(arr , 1, n);
        
        return max(max1 , max2);
    }
};



//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }

        Solution ob;
        int res;
        res = ob.maxValue(arr);
        cout << res << "\n"
             << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends