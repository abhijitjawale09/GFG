//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    void rearrange(vector<int> &arr) {
        // code here
        vector<int> n;
        vector<int> p;
        
        for(auto a : arr) {
            if(a < 0){
                n.push_back(a);
            }else{
                p.push_back(a);
            }
        }
        bool flag = true; 
        int i = 0,j = 0,k = 0;
        
        while(i < p.size() && j < n.size()){
            if(flag){
                arr[k++] = p[i++];
                flag = false;
            }
            else{
                arr[k++] = n[j++];
                flag = true;
            }
        }
        
        while(i < p.size()){
            arr[k++] = p[i++];
        }
        while(j < n.size()){
            arr[k++] = n[j++];
        }
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
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        ob.rearrange(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends