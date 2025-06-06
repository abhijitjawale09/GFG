//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int lis(vector<int>& nums) {
        // code here
        int n = nums.size();
        int maxlen  = 1;

        vector<int> t(n , 1);
        for(int i = 0; i < n; i++) {
            for(int j = 0 ; j < i; j++) {
                if(nums[i] > nums[j] ) {
                    t[i] = max(t[i] , t[j] + 1);

                    maxlen = max(maxlen , t[i]);
                }
            }
        }

        return maxlen;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // to ignore the newline after the integer input

    while (t--) {
        int n;
        vector<int> arr;
        string input;

        // Input format: first number n followed by the array elements
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            arr.push_back(num);

        Solution obj;
        cout << obj.lis(arr) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends