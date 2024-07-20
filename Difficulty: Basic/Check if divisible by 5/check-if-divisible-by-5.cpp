//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    int divisibleBy5(string N){
        // code here  
        int len = N.length();
        if(N[len-1] == '0' || N[len-1] == '5')
            return 1;
        return 0;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string N;
        cin >> N;
        Solution ob;
        cout << ob.divisibleBy5(N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends