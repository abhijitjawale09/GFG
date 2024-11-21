//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        // code here
        // int n = prices.size();
        // int profit = 0;
        // int totalprofit = 0;
        // int buy = 0;
        // int sell = 0;
        
        // for(int i = 0; i < n - 1; i++) {
        //     buy = prices[0];
            
        //     if(prices[i] <= prices[i+ 1]) {
        //         profit += prices[i] ;
        //     }else {
        //         totalprofit += profit;
        //         profit = 0;
        //         buy = prices[i + 1];
        //     }
            
        // }
        
        
        // return maxprofit;
        
        int profit=0;
        for(int i=0;i<prices.size()-1;i++){
            if(prices[i]<prices[i+1]){
                profit+=prices[i+1]-prices[i];
            }
        }
        return profit;
    }
};


//{ Driver Code Starts.
int main() {
    int t;

    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int n = arr.size();
        Solution ob;
        int res = ob.maximumProfit(arr);
        cout << res;

        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends