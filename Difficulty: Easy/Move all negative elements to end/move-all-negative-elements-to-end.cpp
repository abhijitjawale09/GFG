//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        // Your code goes here
        vector<int> v;
        vector<int> c;
        int n = arr.size();
        for(int i = 0; i < n; i++) {
            if(arr[i]  < 0) {
                v.push_back(arr[i]);
            }else{
                c.push_back(arr[i]);
            }
        }
        int in =0;
        for(int i = 0; i < c.size(); i++)  {
            arr[in++] = c[i];
        }
        for(int i = 0; i < v.size(); i++) {
            arr[in++] = v[i];
        }
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        ob.segregateElements(nums);

        for (int x : nums)
            cout << x << " ";
        cout << endl;
    }
}
// } Driver Code Ends