//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int n;
    int t[10001][2][201];
    int solve(vector<int>& prices, int k , int i , bool buy) {
        if(i >= n || k == 0) {
            return 0;
        }
        
        int profit = INT_MIN;
        if(t[i][buy][k] != -1) {
            return t[i][buy][k];
        }  
        
        
        if(buy) {
            int take = solve(prices , k  , i + 1 , false) - prices[i];
            int skip = solve(prices , k , i + 1 , true);    
            profit = max(take , skip);

        }else{
            int sell = solve(prices , k-1 , i + 1 , true) + prices[i];
            int not_sell = solve(prices , k , i + 1 ,false);
            profit = max(sell , not_sell);
        }
        
        return t[i][buy][k] = profit;
    }
    int maxProfit(vector<int>& prices, int k) {
        // code here
        n = prices.size();
        memset(t,-1,sizeof(t));
        return solve(prices , k , 0 , true);
    }
};


//{ Driver Code Starts.

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        getline(cin, input);
        istringstream iss(input);
        vector<int> arr;
        int num;

        // Read integers from the input string
        while (iss >> num) {
            arr.push_back(num);
        }
        int k;
        cin >> k;
        cin.ignore();
        Solution ob;
        cout << ob.maxProfit(arr, k) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends