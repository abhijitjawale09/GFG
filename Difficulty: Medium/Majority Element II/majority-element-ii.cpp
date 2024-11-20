//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& arr) {
        // Your code goes here.4
        int n = arr.size();
        
        
        vector<int> v;
        unordered_map<int , int > mp;
        
        for(int i= 0; i < n ; i++) {
            mp[arr[i]]++;
        }
        
        int third = n / 3;
        
        for(auto a : mp) {
            if(a.second > third) {
                v.push_back(a.first);
            }
        }
        sort(v.begin() , v.end());
        
        return v;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        vector<int> ans = ob.findMajority(nums);
        if (ans.empty()) {
            cout << "[]";
        } else {
            for (auto &i : ans)
                cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends