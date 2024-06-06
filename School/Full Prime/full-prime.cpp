//{ Driver Code Starts
//Initial template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
    public:
    bool prime(int N){
        if(N<=1){
	        return false;
	    }
	    for(int i =2 ; i<=sqrt(N) ; i++){
	       if(N%i == 0){
	           return false ;
	       }
	    }
	    return true;
    }
	int fullPrime(int N){
	    //code here
	    if (!prime(N)) {
	        return 0;
	    }
	    int tempN =N;
	    while(tempN>0){
	       int digit = tempN%10;
	       
	       if(!prime(digit)){
	         return 0;  
	       }
	       tempN = tempN/10;
	    }
	    return 1;
	}
	    
};


//{ Driver Code Starts.
int main()
{
	int t;
    cin>>t;
    while(t--){
	   int N;
	   cin>>N;
       Solution ob;
       cout << ob.fullPrime(N)<<"\n";
    }
}
// } Driver Code Ends