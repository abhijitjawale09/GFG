//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int search(vector<int>& arr, int key) {
        // complete the function here
        int n = arr.size();

        int start = 0 , end = n -1;

        while(start <= end) {
            int mid = start + (end - start) / 2;
            
            if(arr[mid] == key) {
                return mid;
            }
            
            if(arr[mid] >= arr[start]) {
                if(key >= arr[start] && key < arr[mid]){
                    end = mid - 1;
                
                }else {
                    start = mid + 1;
                }
            }else {
                if(key > arr[mid]  && key <= arr[end]) {
                    start = mid + 1;
                }else {
                    end = mid - 1;
                }
            }
        }
        return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin.ignore();
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(arr, key) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends