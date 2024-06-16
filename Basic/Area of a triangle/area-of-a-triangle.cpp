//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
    public:
    double findArea(int A,int B,int C){
        //code here
        if(A+B <= C || A+C <= B || B+C <= A)
            return 0;
        double s = (A+B+C)/2.0;
        double temp = s*(s-A)*(s-B)*(s-C);
        return sqrt(temp);
    }
    
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int A,B,C;
        cin>>A>>B>>C;
        Solution ob;
        cout<<fixed<<setprecision(3);
        cout<<ob.findArea(A,B,C)<<"\n";
    }
}
// } Driver Code Ends