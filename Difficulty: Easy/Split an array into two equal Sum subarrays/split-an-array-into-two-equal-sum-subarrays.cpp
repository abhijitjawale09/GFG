//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        // code here
        int totalsum=0,sum=0,j=0,i=0;
        for( i=0;i<arr.size();i++)
        {
            totalsum+=arr[i];
        }
        int target=totalsum/2;
        if (totalsum % 2 != 0) 
        {
            return false;
        }
        while(sum<=target)
        {
            sum+=arr[j];
            j++;
            if(sum==target)
            {
                return true;
                break;
            }
            if(sum>target)
            {
                return false;
                break;
            }
        }
        
        
       
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t-- > 0) {
        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> arr;
        string temp;
        while (ss >> temp) {
            arr.push_back(stoi(temp));
        }

        Solution obj;
        bool res = obj.canSplit(arr);
        cout << (res ? "true" : "false") << endl;
    }
    return 0;
}
// } Driver Code Ends