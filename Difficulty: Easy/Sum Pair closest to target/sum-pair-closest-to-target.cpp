//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
 vector<int> sumClosest(vector<int>& arr, int target) {
    int n = arr.size();
    sort(arr.begin(), arr.end());
    int i = 0, j = n - 1;
    int maxdiff = INT_MIN, clo = INT_MAX;
    vector<int> res;

    while (i < j) {
        int sum = arr[i] + arr[j];
        int diff = abs(arr[i] - arr[j]);

        if (abs(target - sum) < abs(target - clo) || 
           (abs(target - sum) == abs(target - clo) && diff > maxdiff)) {
            clo = sum;
            maxdiff = diff;
            res = {arr[i], arr[j]};
        }

        if (target < sum) {
            j--;
        } else {
            i++;
        }
    }

    return res;
}

};

//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int target = stoi(ks);
        Solution ob;
        vector<int> ans = ob.sumClosest(arr, target);
        if (ans.empty()) {
            cout << "[]";
        } else {
            for (auto it : ans) {
                cout << it << " ";
            }
        }
        cout << endl;
        cout << "~\n";
    }

    return 0;
}
// } Driver Code Ends