//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {

  public:
    int maxWater(vector<int> &arr) {
        // code here
        int maxwater =0 ;
        int currwater = 0;
        int n = arr.size();
        
        
        int i = 0 , j = n - 1;
        while(i <= j) {
            currwater = min(arr[i] , arr[j])*(j - i);
            
            maxwater = max(maxwater , currwater);
            
            if(arr[i] > arr[j]) {
                j--;
            }else{
                i++;
            }
        }
        return maxwater;
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

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.maxWater(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends