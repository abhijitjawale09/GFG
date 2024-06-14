//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;



// } Driver Code Ends
class Solution{
  public:
    vector<long long> getDigitDiff1AndLessK(long long *arr, int n, long long k) {
        // code here
           vector<long long>v;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<k && arr[i]>9)
            {
                int tmp=arr[i];
                 bool valid=true;
                 
                while(tmp>0)
                {
                    long long n1=tmp%10;
                    tmp/=10;
                    
                    if(tmp==0)
                        break;
                    
                      long long n2=tmp%10;
                    
                        if(abs(n1-n2)!=1)
                        {
                            valid=false;
                            break;
                        }
                    
                }
                if(valid)
                    v.push_back(arr[i]);
            }
        }
        return v;
        
    }
    
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;
        long long arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution obj;
        auto ans = obj.getDigitDiff1AndLessK(arr, n, k);
        for (auto x: ans) {
            cout << x << " ";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";

    }
    return 0;
}

// } Driver Code Ends