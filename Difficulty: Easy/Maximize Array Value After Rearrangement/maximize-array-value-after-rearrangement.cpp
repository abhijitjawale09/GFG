//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
        // Complete the function
         int mod =1e9 +7;
         int Maximize(vector<int> &arr) {
        int n =arr.size();
        sort(arr.begin(),arr.end());
        int sum =0;
        for(int i =0;i< n;i++){
            sum = (sum + 1ll*i*arr[i])%mod;
        }
        return sum;
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
        //  cin.ignore();
        int n = arr.size();
        Solution ob;
        cout << ob.Maximize(arr) << endl;
    }
}
// } Driver Code Ends