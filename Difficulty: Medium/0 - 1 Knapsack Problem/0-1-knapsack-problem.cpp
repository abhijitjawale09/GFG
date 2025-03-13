//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int n; 
    int t[1001][1001];
    int solve(int W, vector<int> &val, vector<int> &wt , int i) {
        if(i >= n) {
            return 0;
        }
        
        if(t[i][W] != -1) {
            return t[i][W];
        }
        
        int take = 0 , skip = 0;
        
        if(wt[i] > W){
             skip = solve(W , val , wt, i + 1);
        }else{
            take = val[i] + solve(W - wt[i], val , wt, i + 1);
            skip = solve(W , val , wt, i + 1);
            
        }
        return t[i][W] = max(take , skip);
        
    }
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        // code here
        n = val.size();
        memset(t , -1 , sizeof(t));
        return solve(W , val , wt , 0);
    }
};


//{ Driver Code Starts.

int main() {
    // Taking total test cases
    int testCases;
    cin >> testCases;
    cin.ignore();
    while (testCases--) {
        // Reading number of items and capacity
        int numberOfItems, capacity;
        vector<int> weights, values;
        string input;
        int number;

        // Read capacity and number of items
        getline(cin, input);
        stringstream ss(input);
        ss >> capacity;      // The first number is the capacity
        ss >> numberOfItems; // The second number is the number of items

        // Read values
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            values.push_back(number);
        }

        // Read weights
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            weights.push_back(number);
        }

        Solution solution;
        cout << solution.knapsack(capacity, values, weights) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends