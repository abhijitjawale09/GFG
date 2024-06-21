//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    string makeEven(string s)
    {
        //code here.
        int n = s.size();
        int index = n - 1;
        for(int i = 0 ; i < n ; i++){
            if(s[i] % 2 == 0){
                index = i ;
                if(s[i] < s[n - 1]){
                    break;
                }
            }
        }
        swap(s[s.length() - 1] , s[index]);
        return s;
    }
     
    
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--){
	    string str;
	    cin>>str;
	    Solution ob;
	    cout<<ob.makeEven(str)<<endl;
	}
	return 0;
}

// } Driver Code Ends