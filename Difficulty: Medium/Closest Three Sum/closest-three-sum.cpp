//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

// arr : given vector of elements
// target : given sum value

class Solution {
  public:
    int threeSumClosest(vector<int> arr, int target) {
        // Your code goes here
         sort(arr.begin(),arr.end());
        int a = INT_MAX , b , c=INT_MAX, d;
        int n = arr.size();
        if(n<3){return -1;}
        for(int i=0 ; i<=n-3 ; i++){
            int j=i+1 , k=n-1;
            while(j<k){
                int sum = arr[i]+arr[j]+arr[k];
                if(sum==target){
                    return sum;
                }
                else if(sum>target){
                    k--;
                    if(sum-target<a){
                        a = sum-target;
                        b = sum;
                    }
                }
                else{
                    j++;
                    if(target-sum<c){
                        c = target-sum;
                        d = sum;
                    }
                }
            }
        }
        if(a>c){return d;}
        else if(a==c){
            return max(b,d);
        }
        else{
            return b;
        }
        
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
        // cin.ignore();
        // if (f)
        //     return 0;
        Solution ob;
        cout << ob.threeSumClosest(arr, key) << endl;
    }
    return 0;
}
// } Driver Code Ends